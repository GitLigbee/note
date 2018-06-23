#include <stdio.h>

int * generate(int size)
{
    return (int*)malloc( sizeof(int) * size);
}

void main()
{
    int* p;
    int i;
    int size = 2;
    p = generate(size);
    for(i = 0; i< size; i++)  {
        p[i] = i;
    }
    printf("%d", p[1]);
}