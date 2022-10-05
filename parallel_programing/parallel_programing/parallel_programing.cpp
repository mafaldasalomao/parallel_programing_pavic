// import libs
#include <iostream>
#include <fstream> // to create file
using namespace std;

int main() {
	int width = 255, heigth = 255, max_pixel = 255; //defining variables

	ofstream image("image.ppm"); // open file

	//write header
	image << "P3" << endl;
	image << width << " " << heigth << endl;
	image << max_pixel << endl;
	//end header
	//write body
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < heigth; j++) {
			image << i % max_pixel << " " << j % max_pixel << " " << (i + j) % max_pixel << endl; // the 'mod' does not allow the value to exceed the value of max pixel
		}
	}
	//end body
	image.close(); //close file
	return 0; //success
}