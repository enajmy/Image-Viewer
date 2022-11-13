/********************************************************************
* File: imgViewer.c
*
* Description: this file implements a cmd-line based image viewer.
*
* Author: Ethan Najmy
*
* Revisions:
*	- 1.0: file created
*
********************************************************************/

#include "imgViewer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/ximgproc.hpp>
#include <opencv2/imgcodecs.hpp>

/*--------------------------------------------------------------
* Function: viewFile()
*
* Description: will open the contents of a file
*
* variable: description
* variable: description
*
* return: type
*-------------------------------------------------------------*/
int viewFile(void){
	char fileName[100]="";
	
	printf("\nPlease enter file name: ");
	scanf("%s",fileName);

	cv::Mat file = cv::imread(fileName, cv::IMREAD_COLOR);
	if (file.empty()){
		printf("\nImage read failed! Try a different file.\n");
	}

	cv::imshow("Image Viewer", file);
	cv::waitKey(0);
	
	return 0;

}
		
