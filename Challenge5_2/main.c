#include <stdio.h>
#include <stdlib.h>

int main()
{
    char id;
    printf("Bitte geben Sie ein einzelnes Zeichen als Zugangscode ein:\n");
    id = getchar();
    printf(id=='f' ? "Du bist drin" : "Du bist raus");

    return 0;
}
