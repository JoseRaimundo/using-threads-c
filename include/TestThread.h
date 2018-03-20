#include "Thread.h"

#include <iostream>
#include <string>

using namespace std;

class TestThread : public Thread {

	public:
		TestThread(int test);
		void *run();
		~TestThread();
	private:
		int thread_color;
};
