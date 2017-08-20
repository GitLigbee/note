#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(void)
{
    srand(time(NULL)); //生成随机数种子，rand函数根据此种子，再来生成随机数
    // srand(1);  //rand生成的随机数不变
    printf("%d", rand());
}