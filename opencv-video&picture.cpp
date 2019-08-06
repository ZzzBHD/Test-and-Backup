#include "stdafx.h"
#include "iostream"
#include "cv.h"
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;
/*视频转图片帧*/
int main()
{
	// 获取视频文件
	VideoCapture cap("F:\\ZB\\Desktop\\C++test\\室外离线测试（瑞虎车）.mp4");//开云车w-1890，h-1018，526帧,帧率10；瑞虎车w-1890，h-1018，640帧，帧率10
	// 获取视频长、宽、总帧数
                int frame_width = (int)cap.get(CV_CAP_PROP_FRAME_WIDTH);
	int frame_height = (int)cap.get(CV_CAP_PROP_FRAME_HEIGHT);
	long totalFrameNumber = cap.get(CV_CAP_PROP_FRAME_COUNT);
	float frame_fps = cap.get(CV_CAP_PROP_FPS);
	cout << "total frames: " << totalFrameNumber << endl;
	cout << "frame_width is " << frame_width << endl;
	cout << "frame_height is " << frame_height << endl;
	cout << "frame_fps is " << frame_fps << endl;
	Mat frame;
	bool flags = true;
	long currentFrame = 0;
	while (flags) {
		// 读取视频每一帧
		cap.read(frame);
		stringstream str;
		str << "cqh" << currentFrame << ".jpg";
		cout << "正在处理第" << currentFrame << "帧" << endl;
		printf("\n");
		// 设置每5帧获取一次帧
		//if (currentFrame % 10 == 0) {
			// 将帧转成图片输出
			imwrite("F:\\test\\" + str.str(), frame);
		//}
		// 结束条件
		if (currentFrame >= totalFrameNumber) {
			flags = false;
		}
		currentFrame++;
	}
	system("pause");
}

/*图片帧合成为视频*/
int main()
{
	cout << "---------------Video_To_Image-----------------" << endl;
	string s_image_name;
	cv::VideoWriter writer;
	int isColor = 1;//不知道是干啥用的
	int frame_fps = 10;
	int frame_width = 1890;
	int frame_height = 1018;
	using namespace cv;
	string video_name = "out1.avi";
	writer = VideoWriter(video_name, CV_FOURCC('M', 'J', 'P', 'G'), frame_fps, Size(frame_width, frame_height), isColor);
	cout << "frame_width is " << frame_width << endl;
	cout << "frame_height is " << frame_height << endl;
	int num = 526;//输入的图片总张数
	int i = 0;
	stringstream str;
	
	Mat img;
	while (i <= num)
	{
		str << "cqh" << i << ".jpg";
		s_image_name = "F:\\test\\" + str.str();
		img = imread(s_image_name);//读入图片
		if (!img.data)//判断图片调入是否成功
		{
			cout << "Could not load image file...\n" << endl;
		}
		//imshow("image to video", img);
		//写入
		writer.write(img);
		i++;
		str.str("");
	}
	system("pause");
	return 0;
}

