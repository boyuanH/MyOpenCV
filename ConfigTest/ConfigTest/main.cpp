#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
	Mat img = imread("1.png");
	imshow("Title of 1", img);

	waitKey(6000);
}