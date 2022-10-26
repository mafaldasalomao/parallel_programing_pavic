#include <opencv2\opencv.hpp>
#include <time.h>
using namespace cv;

using namespace std;

int main() {

	Mat image;

	namedWindow("Display window");

	VideoCapture cap(0);

	if (!cap.isOpened()) {

	cout << "cannot open camera";

	}
	// Start and end times
	time_t start, end;

	while (true) {
		// Start time
		time(&start);
	cap >> image;

	imshow("Display window", image);
	// End Time
	time(&end);
	// Time elapsed
	double seconds = difftime(end, start);
	cout << "Time taken : " << seconds << " seconds" << endl;
	waitKey(25);

	}

	return 0;

}
