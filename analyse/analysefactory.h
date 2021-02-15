#ifndef ANALYSEFACTORY_H
#define ANALYSEFACTORY_H

#include "../data/dicomobj.h"
#include <opencv2/core.hpp>


class AnalyseFactory
{
private:
    cv::Mat sourceMat;
    cv::Mat resultMat;
    cv::Mat cannyMat;
    cv::Mat blurMat;
    cv::Point2f leftUpperCorner;
    cv::Point2f rightLowerCorner;
    cv::Point2f leftLowerCorner;
    cv::Point2f rightUpperCorner;
    vector<cv::Point2f> featureToTrack(cv::Mat source);
    double area;
    double pixelSpacing;

public:
    AnalyseFactory(cv::Mat &sourceMat, double pixelSpacing);
    cv::Mat getResultMat(){return resultMat;};
    cv::Mat getCannyMat(){return cannyMat;};
    cv::Mat getBlurMat(){return blurMat;};
    void processFactory();
    void defineCorner(vector<cv::Point2f> corners);
    double getArea(){return area;};
    double a;
    double b;
};

#endif // ANALYSEFACTORY_H
