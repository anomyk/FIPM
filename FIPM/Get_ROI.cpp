#include "pch.h"
#include "Get_ROI.h"



void GetImg(std::string path)
{
	cv::Mat img = cv::imread(path, 0);
	GetROI(img);
	//cv::imshow("img", img);
	//cv::waitKey();

}

void GetROI(cv::Mat img)
{
	//ROI 추출 후 HAT 씌우기........

	//1. 경계선 추출
	//2. 사각형 그리기.
	//3. 이쁘게
}

void DisplayROI()
{

}