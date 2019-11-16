#include "stdio.h"

int main()
{
    int i,j,nb;

nb = 5;
    i = nb;
    j = 1;
    while (i >= 0)
    {
    	j = 1;
        while (j <= i)
        {
            printf(" ");
            j++;
        }
        j = nb;
        while (j >= i)
        {
            printf("*");
            j--;
        }
        printf("\n");
        i--;
        
        
    }
    
    return 0;
}
