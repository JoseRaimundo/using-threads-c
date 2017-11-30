#include "../include/TestThread.h"

TestThread::TestThread(int test){
	this->test_thread = test;
}

TestThread::~TestThread() {
}


void *TestThread::run() {
	int cont = 0;
	while(cont < 3){
		for (int i = 0; i < 10000000; ++i){
			int a = 1, b= 1;
			a = a + b * a * b; //just to delay
		}
 	   cout << "This is my " << this->test_thread <<" thread!" << endl;
 	   cont++;
	}
}