/**
 * Pthread_create() creates a new thread and makes it execute the function worker_thread()
 * 
 * arg : This is the argument that will be passed to the thread function.
 * 
 * @return NULL
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
void *worker_thread(void *arg)
{
        printf("This is worker_thread()\n");
        return NULL;
}

int main()
{
    pthread_t my_thread;
    int ret;

    printf("In main: creating thread\n");
    ret = pthread_create(&my_thread, NULL, &worker_thread, NULL);
    if(ret != 0) 
        printf("Error: pthread_create() failed\n");
    pthread_join(my_thread, NULL);
    return 0;
}