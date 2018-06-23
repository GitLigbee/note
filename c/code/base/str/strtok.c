#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello#world#c#language";
    char *key = "#";
    char *p = NULL;
    // 将str按分隔符key截取第一个地址， strtok 内部会保存分割符后地址
    p = strtok(str, key);
    printf("%s\n", p);
    while( (p = strtok(NULL, key)) != NULL) {
        printf("%s\n", p);
    }
    /* p = strtok(NULL, key);
    printf("%s\n", p);
    p = strtok(NULL, key);
    printf("%s\n", p);
    p = strtok(NULL, key);
    printf("%s\n", p); */

    return 0;
}