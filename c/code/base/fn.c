#include <stdio.h>

void fn(int i);

void main(void)
{
    int i = 65;
    fn(i);
}

void fn(int i)
{
    putchar(i);
}

int demo(int i)
{}