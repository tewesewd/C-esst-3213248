#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    a = 1;
    printf("a: %d\n", a);
    a++;
    printf("a: %d\n", a);
    
    b = 2;
    printf("b: %d\n", b);
    b--;
    printf("b: %d\n", b);


    c = a++;
    printf("c: %d\n", c);
    c = ++a;
    printf("c: %d\n", c);
    
    
    return 0;
}
