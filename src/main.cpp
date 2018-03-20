#include <string>
#include "../include/TestThread.h"
#include <stdio.h>

#define MAX_THREAD 5

using namespace std;

int main(){

	TestThread *test_thr[MAX_THREAD+1];

    //create all threads using number color as parameters (30 - 35)
    for (int j = 0; j < MAX_THREAD; j++){
        test_thr[j] = new TestThread(j+30);   
    }

    //start threads (this operation could be within the scope of the previous For)
    for (int j = 0; j < MAX_THREAD; j++){ 
        test_thr[j]->start();     
        //test_thr[j]->join(); //uncomment this line to see the behavior change of threads 
    }

    for (int j = 0; j < MAX_THREAD; j++){
        test_thr[j]->join();  
    }

    /*for this example, delete function is not required. 
    This function frees the resources used by the threads, 
    however in a short example it can cause error 
    due to the speed of execution of the example
    */
    for (int j = 0; j < MAX_THREAD; j++){
       // delete test_thr[j]; 
    }    
}
