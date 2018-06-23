#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <string.h>

void* threadDemo( void* data)
{
    printf("hello pthread");
}

void* threadData( void* data)
{
    char str = *( (char*)data );
    printf("%s", str);
}

int main()
{
    // gcc -o thread thread.c -lpthread
    pthread_t pid, pid2;

    pthread_create(&pid, NULL, threadDemo, NULL);
    pthread_join(pid, NULL);

    char str = "hello pthread";
    pthread_create(&pid2, NULL, threadData, str);
    pthread_join(pid2, NULL);

    return 0;
}