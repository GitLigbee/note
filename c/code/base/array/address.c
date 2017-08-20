#include <stdio.h>

void main(void)
{
    int a[5];
    printf("%p\t%p\n", a, &a[0]);
    printf("%p\t\n", a+1); //增加一个元素地址

    a[1] = 1;
    printf("%d", *(a+1)); //*取地址内内容，根据类型去字节数量内容
}