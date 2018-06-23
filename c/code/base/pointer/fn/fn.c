#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

int (*demo)(int, int);

void main()
{
    printf("%d\n", add(1,1));
    printf("%p\n", add);

    int (*p)(int a, int b) = add;
    printf("%d\n", p(3,3));
    p = mul;
    printf("%d\n", p(3,3));
    demo = add;
    printf("%d\n", demo(3,9));
}