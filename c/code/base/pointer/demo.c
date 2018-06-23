#include <stdio.h>

main()
{
    int i = 1;
    int *p;
    p = &i;//保存i的地址
    printf("%d", *p); //获取指针保存的地址对应的值，根据指针定义的类型获取地址的字节数
}