#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bitte geben Sie ein einzelnes Zeichen ein:\n");
    char a = getchar();
    printf("Sie haben das Zeichen %c eingegeben.\n",a);
    printf("ASCII Code %d", a);
    return 0;
}
