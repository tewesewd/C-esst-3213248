#include <stdio.h>
#include <stdlib.h>

int i = 1;

void test1()
{
    static i = 2;
}

void test2()
{
    printf("%d\n",i);
}

int test3(int i)
{
    i++;
    printf("%d\n", i);
}


int main()
{
    test1();
    printf("%d\n", i);
    test2();
    test3(42);
    printf("%d\n", i);


return 0;
}