#include "../include/TestThread.h"

TestThread::TestThread(int color_number){
	this->thread_color = color_number;
}

TestThread::~TestThread() {
}

void *TestThread::run() {
	//Here, you put your paralel code
	//just to delay
	for (long i = 0; i < 100000000; ++i){
		long a = 1, b= 1;
		a = a + b * a * b; 
	}
	//output color
	cout << "\033[1;"<<this->thread_color <<"mbold This is my thread\033[0m\n";
}