#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>

// create array of two threads
pthread_t tID[2];
// A normal C function that is executed as a thread
// when its name is specified in pthread_create()
void *primeNfib(void *arg)
{
    pthread_t id = pthread_self();

    if (pthread_equal(id, tID[0]))
    {
        printf("\nFirst thread %ld processing\n", id);
        printf("Display message:");
	printf("hello\n"); 
    }
    else
    {
        printf("\nSecond thread %ld processing\n", id);
       printf("Display message:");
	printf("how are you\n");   
}
 }

void main()
{
    int i = 0;
    while (i < 2)
    {
        pthread_create(&(tID[i]), NULL, &primeNfib, NULL);
        sleep(3);
        ++i;
    }
    printf("\n");
}
