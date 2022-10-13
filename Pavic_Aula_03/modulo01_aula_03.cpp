#include <iostream>
#include <fstream> // to create file
#include <stdlib.h>     /*if use srand, rand */
#include <sstream>
#include <vector>

using namespace std;

int main() {
	int width = 100, heigth = 100, max_pixel = 255; //defining variables
	// Create a vector of size n with
	// all values as 10.
	vector<int> R_vec(max_pixel, 0);
	vector<int> G_vec(max_pixel, 0);
	vector<int> B_vec(max_pixel, 0);
	ofstream image("./images/images.ppm"); // open file
	//image.open("./images/RGB.ppm");
	if (image.is_open()) {
		//write header
		image << "P3" << endl;
		image << width << " " << heigth << endl;
		image << max_pixel << endl;
		//end header

		// 
		//write body
		//setting the seed to make it replicable if use random values to pixels :D
		//srand(42);
		for (int i = 0; i < width; i++) {
			for (int j = 0; j < heigth; j++) {
				int R, G, B;
				R = (i * j) % max_pixel + 1;
				G = j % max_pixel + 1;
				B = (i + j) % max_pixel + 1;
				R_vec[R-1] = R_vec[R - 1]+1;
				G_vec[G-1] = G_vec[G - 1]+1;
				B_vec[B-1] = B_vec[B - 1]+1;
				image << R << " " << G << " " << B << endl; // the 'mod' does not allow the value to exceed the value of max pixel
				//uncomment the line below if generate random
				//image << rand() % max_pixel + 1 << " " << rand() % max_pixel + 1 << " " << rand() % max_pixel + 1 << endl;
			}
		}
		//end body
	}
	for (int i = 1; i < R_vec.size(); i++) {
		cout << R_vec[i] + G_vec[i] + B_vec[i] << endl;
	}
	


	image.close(); //close file
	return 0; //success
}