#include <stdio.h>
void main(void)
{
    int num;
    char ch;
    scanf_s("%c", &ch);
    num = ch;
    // scanf_s("%d", &num);
    // printf("%d", num);
    // printf("%c", ch);
    switch(num) {
        case 1:
            printf("type of int");
            break;
        case 97: //a
            printf("char turn to int\n");
            break;
        default:
            printf("nothing match\n");
            break;
    }
}