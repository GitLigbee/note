#include <stdio.h>

void main(void)
{
    printf("%4d%4d", 4, 5); //右对齐，占4位
    printf("%-4d%-4d", 4, 5); //左对齐，占4位，不足用空格补充
    printf("%-04d%-04d", 4, 5); //左对齐，占4位，不足用0补充
    printf("%6.4f", 4.0054); //左对齐，占6位，保留小数点后4位
    printf("%.4s", "hello world"); //左对齐，截取4位
    printf("%ld", 12345678); //左对齐，输出长整型
}