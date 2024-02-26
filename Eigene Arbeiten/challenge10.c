#include <stdio.h>
#include <stdlib.h>

int main()
{

    double feld[] = {1.0, 1.2, 3.4, 5, 23, 4.3};
        for(int i = 0; i < sizeof(feld)/sizeof(double); i++)
        {
            if((int)feld[i]==feld[i])
            {
                printf("%d\t", (int)feld[i]);
            }
            else
            {
                printf("%f\t", feld[i]);
            }
        }
return 0;
}