/*
 * dicomobj.cpp
 *
 *  Created on: 22.01.2021
 *      Author: office
 */

#include "dicomobj.h"
#include "dcmtk/dcmdata/dctk.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <math.h>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <cstring>
#include <locale.h>
#include "../helper/stringHelper.h"

DcmDataset *metaInfos = new DcmDataset();

DCMObject::DCMObject(char* imagePath) {
    this->filename = imagePath;
    DicomImage *imag = new DicomImage(imagePath);
    DcmFileFormat *fformat = new DcmFileFormat();
    fformat->loadFile(imagePath);
    metaInfos = fformat->getDataset();
	this->image = imag;
	if (image != NULL) {
		if (image->getStatus() == EIS_Normal) {
			if (this->image->isMonochrome()) {
				this->image->setMinMaxWindow();
				Uint8 *pixelData = (Uint8*) (image->getOutputData(8 /* bits */));
				if (pixelData != NULL) {
                    cv::Mat tmpMat = cv::Mat(int(image->getHeight()),
							int(image->getWidth()), CV_16UC1,
							(uchar*) image->getOutputData(16));
                    cv::normalize(tmpMat,this->imageMat,0,255.0,cv::NORM_MINMAX,CV_8UC1);
                //cv::imshow("Debug", this->imageMat);
                }
			}
		} else
			cerr << "Error: cannot load DICOM image ("
					<< DicomImage::getString(this->image->getStatus()) << ")" << endl;
	}

    }


DCMObject::DCMObject(string filename)
{
    char* tmp = new char[filename.length()];
    strcpy(tmp,filename.c_str());
    new (this) DCMObject(tmp);
}

void DCMObject::setFilename(char* filename) {
	this->filename = filename;
}
char* DCMObject::getImageName() {
    OFString rtImageLabel;
    char* name = NULL;
    if(metaInfos->findAndGetOFString(DCM_RTImageLabel,rtImageLabel).good()){
        name = new char[rtImageLabel.length()];
        strcpy (name, rtImageLabel.c_str());
    }
    return name;
}

vector<double> DCMObject::getPixelSize() {
    DcmElement *elem;
    vector<double> returnValue;
    OFCondition status = metaInfos->findAndGetElement(DCM_ImagePlanePixelSpacing,elem);
    if(status.good()){
        char *yValue;
        elem->getString(yValue);
        vector<string> token = Alg::splitStr(yValue, '\\');
        std::locale::global(std::locale("en_US.utf8"));
        for(std::size_t i = 0; i < token.size(); i++){
            returnValue.push_back(std::stod(token.at(i)));
        }
        std::locale::global(std::locale(""));

    } else {
        std::cerr << status.text() << std::endl;
    }
    return returnValue;
}

DCMObject::~DCMObject()
{

}
