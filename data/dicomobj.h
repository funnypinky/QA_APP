/*
 * dicomobj.h
 *
 *  Created on: 22.01.2021
 *      Author: office
 */

#ifndef DICOMOBJ_H_
#define DICOMOBJ_H_

#include <iostream>
#include <string>
#include <opencv2/core.hpp>

using namespace std;

#include "dcmtk/dcmimgle/dcmimage.h"

class DCMObject {
private:
	char* filename;
	string uid;
	DicomImage *image;
	cv::Mat imageMat;
	

public :
	DCMObject(char* filename);
    DCMObject(string filename);
    cv::Mat getImageMat(){return imageMat;};
	DicomImage getImage();
	void setFilename(char* filename);
        char* getImageName();
        ~DCMObject();
    vector<double> getPixelSize();
};


#endif /* DICOMOBJ_H_ */
