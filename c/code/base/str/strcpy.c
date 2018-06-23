#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[6];
    char str[] = "hello";

    printf("%s", strcpy(dest, str));
    return 0;
}