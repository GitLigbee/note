#include <stdio.h>
#include <string.h>

int main(void)
{
    char hello[7] = "hello ";
    char su[] = "su";

    printf("%s\n", strcat(hello, su));
}