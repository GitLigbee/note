#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello c language";
    char *key = "lan";
    char *p = NULL;

    p = strstr(str, key);
    printf("%s", p);
    return 0;
}