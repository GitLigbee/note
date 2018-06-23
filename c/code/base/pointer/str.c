#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello world";
    printf("sizeof = %d, strlen = %d\n", sizeof(str), strlen(str));
    char *p;
    p = str;
    while(*p != '\0')
    {
        putchar(*p);
        p++;
    }
    putchar('\n');
}