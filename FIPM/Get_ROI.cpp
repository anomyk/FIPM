#include "pch.h"
#include "Get_ROI.h"
#include <vector>
using namespace cv;
using namespace std;

void GetImg(std::string path)
{
	Mat img = imread(path, 0);
	
	imshow("img", img);
	GetROI(img);
	
	

}

void GetROI(Mat img)
{
	vector<vector<Point>>contours;
	vector<Vec4i> hierarchy;
	Mat outimg,Cannyimg,resultimg;
	//2진화
	threshold(img, outimg, 55, 255, THRESH_BINARY);// 재설정 필요... 혹은 다른 방법 적용?

	imshow("img2", outimg);
	//waitKey();

	//Canny(outimg, Cannyimg, 20, 40, 3);
	//imshow("img3", Cannyimg);
	////waitKey();
	//ROI 추출 후 HAT 씌우기........

	//경계선 추출
	findContours(outimg, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE, Point(0, 255));
	resultimg = Mat::zeros(outimg.size(), CV_8U);

	for (int i = 0; i < contours.size(); i++)
	{
		Scalar color = Scalar(255);
		drawContours(resultimg, contours, i, color,1, 8, hierarchy, 0, Point());

	}
	imshow("img4", resultimg);
	waitKey();

	// 사각형 그리기.....
	

	//1. 경계선 추출
	//2. 사각형 그리기.
	//3. 이쁘게
}

void DisplayROI()
{

}