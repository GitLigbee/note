#include <stdio.h>
void one();
void two();
void three();

int main(void)
{

    return 0;
}

void one()
{
    char str[] = "hello"; //数据存放于栈
    str[0] = "H";

    char *str = "hello";//数据存放于只读区
    *str = "H";
}

void two()
{
    char str[] = "hello";
    while(*str != '\0') {
        putchar(*str++); //str 本身为地址常量，++相当于左值运算
    }

    char *str = "hello";
    while(*str != '\0') {
        putchar(*str++);
    }
}

void three()
{
    char str[20];
    str = "nice"; //地址常量不允许赋值地址常量

    char *str;
    str = "nice";
}