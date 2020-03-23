 /*************************************************************************
    > File Name: main.cpp
    > Author: Shen Bo
    > mail: Bo.A.Shen@alcatel-sbell.com.cn
    > Created Time: Sun 15 Mar 2020 07:08:33 PM CST
 ************************************************************************/

#include <iostream>
#include <test.hpp>
#include <pthread.h>

#define NUM_THREADS 5

using namespace std;

void *printHello(void *threadId)
{
    long tid;
    tid = (long)threadId;
    cout << "Hello World! ThreadID: " << tid << endl;
    pthread_exit(NULL);
}

int main()
{
    Test* test = new Test();
    test->sayHello();

    pthread_t threads[NUM_THREADS];
    int rc;
    int i;

    for ( i = 0; i < NUM_THREADS; i++)
    {
        cout << "Creating thread, " << i << endl;
        rc = pthread_create(&threads[i], NULL, printHello, (void *)i);

        if(rc)
        {
            cout << "Error:unable to create thread, " << rc << endl;
            return -1;
        }
    }

    return 0;
}
