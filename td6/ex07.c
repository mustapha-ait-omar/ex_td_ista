#include <stdio.h>


int fac(int x)
{
    int fc,i;
    fc = 1;
    i = 1;
    while (i <= x)
    {
        fc = fc * i;
        i++;
    }
    
    
}

int main()
{
    int fc,i;
    fc = 0;
    while (i < 100)
    {
        fc = fc + fac(i);
        i++;
    }

    printf("la somme est : %i",fc);
    
}
