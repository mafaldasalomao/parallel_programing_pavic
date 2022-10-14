// mutex example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <atomic>          // std::atomic
#include <chrono>

using namespace std;
std::atomic<unsigned int> counter(0);
//unsigned int counter = 0;
void print_block(int n, char c) {
	for (int i = 0; i < n; i++) {
		this_thread::sleep_for(chrono::milliseconds(500));
		std::cout <<"index: "<< i << " Thread id: "<< this_thread::get_id() << " Counter Value: "<< counter << endl;
		counter++;
	}
	//std::cout << '\n';
}
void print_block_02(int n, char c) {
	for (int i = 0; i < n; i++) {
		this_thread::sleep_for(chrono::milliseconds(100));
		std::cout << "index: " << i << " Thread id: " << this_thread::get_id() << " Counter Value: " << counter << endl;
		counter++;
	}
	//std::cout << '\n';
}
int main()
{
	std::thread th1(print_block, 10, '*');
	std::thread th2(print_block_02, 10, '$');

	th1.join();
	th2.join();
	cout << counter.load() << endl;
	return 0;
}