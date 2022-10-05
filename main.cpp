// import libs
#include <iostream>
#include <fstream> // to create file
using namespace std;

int main() {
	std::ofstream image("image.txt");
	image << "p3 \n" << endl;
	image.close();
	return 0;
}