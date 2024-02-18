#include <stdio.h>
#include <stdlib.h>

int main()
{
    char zeichen = 'z';
    int alter = 42;
    float durchschnitt = 3.5;

    printf("Hallo\tWelt\n");
    printf("Das Zeichen %c. \n", zeichen);
    printf("Die Zahl %d. \n", alter);
    printf("Die Zahl %f. \n", durchschnitt);

    printf("Die Zahl %d, %f. \n", alter, durchschnitt);

    int tag = 1;
    int monat = 2;
    int Jahr = 2015;
    printf("Das Datum %02d.%02d.%d", tag, monat, Jahr);

    return 0;
}