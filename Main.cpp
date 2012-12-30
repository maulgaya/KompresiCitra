/*
 * Main.cpp
 *
 *  Created on: Dec 30, 2012
 *      Author: maulgaya
 */

#include "cv.h"
#include "highgui.h"

using namespace cv;

void compress(IplImage* img);

/** @function main */
int main( int argc, char** argv )
{
	IplImage* newImg = cvLoadImage("/home/maulgaya/Pictures/tes.jpg",1);
	IplImage* grayImg = cvCreateImage( cvSize(newImg->width, newImg->height), IPL_DEPTH_8U, 1 );
	IplImage* cannyImg = cvCreateImage(cvGetSize(newImg), IPL_DEPTH_8U, 1);

	cvCvtColor( newImg, grayImg, CV_BGR2GRAY );

	cvCanny(grayImg, cannyImg, 50, 150, 3);

	cvNamedWindow("src", CV_WINDOW_NORMAL);
	cvNamedWindow("canny", CV_WINDOW_NORMAL);
	//compress(cannyImg);

	cvShowImage( "src", newImg );
	cvShowImage( "canny", cannyImg );

	cvWaitKey(0);

	cvDestroyWindow( "src" );
	cvDestroyWindow( "canny" );

	cvReleaseImage( &newImg );
	cvReleaseImage( &grayImg );
	cvReleaseImage( &cannyImg );

	return 0;
}

void compress(IplImage* img) {
	for (int y = 0; y < img->height; y++) {
		uchar* ptr = (uchar*) (img->imageData + y * img->widthStep);
		for (int x = 0; x < img->width; x++) {
			//mencari pixel berwarna hitam pada cannyImg
			if (ptr[3 * x + 1] == 0 && ptr[3 * x + 2] == 0 && ptr[3 * x + 3] == 0) {
			}
		}
	}
}






