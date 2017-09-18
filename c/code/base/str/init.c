#include <stdio.h>

void main(void)
{
    char str1[6] = "hello"; //字符串数组会以\0结尾，需占一个字节
    char str2[6] = {'h', 'e', 'l', 'l', 'o'};
    char str3[] = "world";

    printf("%s", str1);
}