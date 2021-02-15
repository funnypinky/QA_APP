#include "analysefactory.h"
#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

AnalyseFactory::AnalyseFactory(cv::Mat &sourceMat)
{
    this->sourceMat = sourceMat;
}

void AnalyseFactory::processFactory()
{
    int cannyThreshold = 25;
    cv::blur(this->sourceMat, this->blurMat, cv::Size(3, 3));
    cv::Canny(this->blurMat, this->cannyMat, cannyThreshold, cannyThreshold * 3);
    vector<vector<cv::Point>> contours;
    vector<cv::Vec4i> hierarchy;
    cv::findContours(this->cannyMat, contours, hierarchy, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE);
    this->resultMat = this->sourceMat.clone();
    cv::cvtColor(this->resultMat, this->resultMat, cv::COLOR_GRAY2RGB);
    vector<cv::Point2f> corners = featureToTrack(this->cannyMat);
    defineCorner(corners);

    for (size_t i = 0; i < contours.size(); i++)
    {
        cv::Scalar color = cv::Scalar(94, 206, 165);
        drawContours(this->resultMat, contours, (int)i, color, 1, cv::LINE_4, hierarchy, 0);
    }

    for (size_t i = 0; i < corners.size(); i++)
    {
        circle(this->resultMat, corners[i], 2, cv::Scalar(0, 0, 255), cv::FILLED);
    }
    cv::rectangle(this->resultMat, this->leftUpperCorner, this->rightLowerCorner, cv::Scalar(0, 0, 255));
}

vector<cv::Point2f> AnalyseFactory::featureToTrack(cv::Mat source)
{
    cv::RNG rng(12345);
    int maxCorners = 4;
    vector<cv::Point2f> corners;
    double qualityLevel = 0.01;
    double minDistance = 10;
    int blockSize = 3, gradientSize = 3;
    bool useHarrisDetector = false;
    double k = 0.04;
    cv::Mat copy = source.clone();
    goodFeaturesToTrack(source,
                        corners,
                        maxCorners,
                        qualityLevel,
                        minDistance,
                        cv::Mat(),
                        blockSize,
                        gradientSize,
                        useHarrisDetector,
                        k);
    cv::Size winSize = cv::Size(5, 5);
    cv::Size zeroZone = cv::Size(-1, -1);
    cv::TermCriteria criteria = cv::TermCriteria(cv::TermCriteria::EPS + cv::TermCriteria::COUNT, 40, 0.001);
    cornerSubPix(source, corners, winSize, zeroZone, criteria);
    return corners;
}
void AnalyseFactory::defineCorner(vector<cv::Point2f> corners)
{

    if (corners.size() == 4)
    {
        //a...b
        //.   .
        //.   .
        //c...d
        cv::Point2f d(this->resultMat.size().width, this->resultMat.size().height);
        cv::Point2f a(0, 0);
        cv::Point2f b(this->resultMat.size().width, 0);
        cv::Point2f c(0, this->resultMat.size().height);
        double distA = cv::norm(a- corners[0]);
        double distB = cv::norm(b - corners[0]);
        double distC = cv::norm(c - corners[0]);
        double distD = cv::norm(d - corners[0]);
        for (size_t i = 0; i < corners.size(); i++)
        {
            if (cv::norm(corners[i] - a) <= distA)
            {
                this->leftUpperCorner = corners[i];
                distA = cv::norm(corners[i] - a);
            }
            if (cv::norm(b - corners[i]) <= distB)
            {
                this->rightUpperCorner = corners[i];
                distB = cv::norm(corners[i] - b);
            }
            if (cv::norm(c - corners[i]) <= distC)
            {
                this->leftLowerCorner = corners[i];
                distC = cv::norm(corners[i] - c);
            }
            if (cv::norm(d - corners[i]) <= distD)
            {
                this->rightLowerCorner = corners[i];
                distD = cv::norm(corners[i] - d);
            }
        }
    }
    else
    {
        std::cerr << "It's not a rectangle!";
    }
}
