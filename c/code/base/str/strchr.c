#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello";
    char key;
    char *p = NULL;

    key = getchar();
    p = strchr(str, key);
    if(p == NULL) {
        printf("no find\n");
    } else {
        printf("%c\n", *p);
    }
    return 0;
}