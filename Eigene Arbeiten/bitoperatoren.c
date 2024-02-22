#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;

    printf("%d\n", ~a); // Bitmuster wird umgedreht
    printf("%d\n", a >> 1); // Alle Bits der Zahl 1 werden eine Stelle nach rechts verschoben
    printf("%d\n", a << 1); // // Alle Bits der Zahl 1 werden eine Stelle nach links verschoben
    return 0;
}