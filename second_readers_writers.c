#include <stdio.h>
#include <pthread.h>
// for rand
#include <stdlib.h>
// for sleep
#include <unistd.h>

pthread_t tId;
pthread_mutex_t readMutex, writeMutex;

int readerCount, writerCount,writeno;

void initialize()
{
    // initialize the mutex
    pthread_mutex_init(&readMutex, NULL);
    pthread_mutex_init(&writeMutex, NULL);
    readerCount = writerCount = 0;
}

void *reader(void *args)
{
    int waitTime;
    waitTime = rand() % 5;

    printf("\n[R] : Reader is trying to enter");

    // set read mutex to locked state
    pthread_mutex_lock(&readMutex);
    
    ++readerCount;
    printf("\n--->  Reader %d has entered", readerCount);
    
    sleep(waitTime);
    
    
    
    printf("\n[R] : Reader %d is leaving", readerCount);
    pthread_mutex_unlock(&readMutex);
    sleep(15);
    
}

void *writer(void *args)
{
    int waitTime;
    waitTime = rand() % 3;
	pthread_mutex_lock(&readMutex);
    printf("\n[W] : Writer is trying to enter");
    // lock write mutex
    pthread_mutex_lock(&writeMutex);
    ++writeno;
    ++writerCount;
    
    
    // give priority to writer on the first try by locking reader mutex
     printf("\n--->  Writer %d has entered", writeno);
     sleep(waitTime);
     printf("\n[W] : Writer %d is Leaving", writeno);
      pthread_mutex_unlock(&writeMutex);
      sleep(waitTime);
      --writerCount;
     
    // if all writers left, unlock read mutex
    if (writerCount == 0)
    {
        pthread_mutex_unlock(&readMutex);
    }
}

void main()
{
    initialize();
    int readers, writers, i;
    printf("No of readers: ");
    scanf("%d", &readers);
    printf("No of writers: ");
    scanf("%d", &writers);
    // create threads
    for (i = 0; i < readers; ++i)
    {
        pthread_create(&tId, NULL, reader, NULL);
    }
    for (i = 0; i < writers; ++i)
    {
        pthread_create(&tId, NULL, writer, NULL);
    }
    sleep(15);
    printf("\n");
}
