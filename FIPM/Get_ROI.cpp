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
	//ROI ���� �� HAT �����........

	//1. ��輱 ����
	//2. �簢�� �׸���.
	//3. �̻ڰ�
}

void DisplayROI()
{

}