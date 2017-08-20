#include <stdio.h>
#define ME 2017 //宏定义

void main(void)
{
    const int pi = 3.14;//常量不允许重复赋值
    printf("%d\n", ME);
    printf("内存地址: %x\n", ME);//小端存储法 一个地址一个字节，高地址存高字节，低地址存低字节
}