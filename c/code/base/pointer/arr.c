#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArr(int *p, int nums);
void showArr(int *p, int nums);

main()
{
    int arr[10];
    initArr(arr, 10);
    showArr(arr, 10);
}

void initArr(int *p, int nums)
{
    int i;
    srand(time(NULL));
    for(i = 0; i < nums; i++) {
        *p = rand();
        p++;
    }
}

void showArr(int *p, int nums)
{
    int i;
    for(i = 0; i < nums; i++)
        printf("%d\t", *(p+i));
}
