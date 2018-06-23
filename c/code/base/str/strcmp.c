#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "hello";
    char str1[] = "world";
    int res;

    res = strcmp(str, str1);
    printf("%d\n",  res);
    return 0;
}