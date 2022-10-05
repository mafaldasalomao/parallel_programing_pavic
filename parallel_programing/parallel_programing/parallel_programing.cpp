#include <iostream>
#include <fstream> // to create file
#include <stdlib.h>     /*if use srand, rand */

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
	//setting the seed to make it replicable if use random values to pixels :D
	srand (42);
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < heigth; j++) {
			image << i % max_pixel+1 << " " << j % max_pixel+1 << " " << (i + j) % max_pixel+1 << endl; // the 'mod' does not allow the value to exceed the value of max pixel
			//uncomment the line below if generate random
			//image << rand() % max_pixel + 1 << " " << rand() % max_pixel + 1 << " " << rand() % max_pixel + 1 << endl;
		}
	}
	//end body


	image.close(); //close file
	return 0; //success
}