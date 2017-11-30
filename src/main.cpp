#include <string>
#include "../include/TestThread.h"
#include <stdio.h>

#define MAX_THREAD 5

using namespace std;

int main(){

	TestThread *test_thr[MAX_THREAD+1];

    for (int j = 0; j < MAX_THREAD; j++){
        test_thr[j] = new TestThread(j);   
        test_thr[j]->start();         
    }

    for (int j = 0; j < MAX_THREAD; j++){
        test_thr[j]->join();  
    }

    for (int j = 0; j < MAX_THREAD; j++){
       // delete test_thr[j];   
    }    
}
