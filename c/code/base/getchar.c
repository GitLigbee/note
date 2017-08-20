#include <stdio.h>

void main(void)
{
    char ch;
    putchar('a'); //输出字符
    putchar('\n');
    ch = getchar(); //接收字符
    putchar(ch + 1);
}