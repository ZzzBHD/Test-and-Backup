// Kinect-test.cpp: 定义控制台应用程序的入口点。
//

#include "head.h"

/*保存kinect的RGB帧图像，并合成为视频保存在本地*/
int main()
{
	Initialization();
	Mat color(colorHeight, colorWidth, CV_8UC4);//彩色图像
	Mat clone(colorHeight, colorWidth, CV_8UC4);//
	Mat body(colorHeight, colorWidth, CV_8UC4);//人体图像
	Mat save(colorHeight, colorWidth, CV_8UC3);
	string video_name = "out1.avi";
	cv::VideoWriter writer;
	writer = VideoWriter(video_name, CV_FOURCC('M', 'J', 'P', 'G'), 10, Size(colorWidth, colorHeight), 1);
	while (waitKey(30) != VK_ESCAPE)
	{
		ColorSign(color);//显示彩色图像
		body = color.clone();
		clone = color.clone();
		cvtColor(color, save, COLOR_BGRA2BGR);
		DrawBodypoints(save, myMapper);
		writer.write(save);
		resize(clone, clone, Size(800, 500));
		imshow("Body", clone);
	}
	destroyAllWindows();
	Release();
	system("pause");
    return 0;
}