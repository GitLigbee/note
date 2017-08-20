#include <time.h>
#include <stdio.h>

void main(void)
{
    int t;
    t = time(NULL);
    printf("%d", t);
}