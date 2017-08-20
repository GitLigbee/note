#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    //读到字符串首地址，从首地址开始输出字符直到读到\0
    puts("Hello c"); //输出字符串并换行
    char buf[4]; // buf实质为首地址
    gets(buf);
    puts(buf);
    printf("%s", buf); //从首地址开始读
}