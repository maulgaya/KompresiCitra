/*
 * Main.cpp
 *
 *  Created on: Dec 30, 2012
 *      Author: maulgaya, ramdan, ricky
 */

#include "cv.h"
#include "highgui.h"

using namespace cv;

/** @function main */
int main( int argc, char** argv )
{
	int p[3];
	IplImage *img = cvLoadImage("/home/maulgaya/Pictures/tes.jpg",1);

	p[0]=CV_IMWRITE_JPEG_QUALITY;
	p[1]=10;
	p[2]=0;

	cvSaveImage("/home/maulgaya/Pictures/out.jpg", img, p);
	exit(0);
}
