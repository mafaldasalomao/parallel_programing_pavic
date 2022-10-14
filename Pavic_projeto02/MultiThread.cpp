#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;
std::mutex pencil;
// whats are doing the thread?
void call_from_thread() {
	cout << "I am sleeping now!... do not disturb me" << endl;
}
//define the main
int main_01() {
	// launch a thread
	thread t1(call_from_thread);
	cout << "I am MAIN, more important of all... :D" << endl;
	t1.join();
	cout << "I am MAIN, after Join" << endl;
	return 0;
}