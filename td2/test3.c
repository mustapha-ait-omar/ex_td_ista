#include <stdio.h>

int main()
{
    int i,nb,j;
    i = 1;
    j = 1;
    printf("n = ");
    scanf("%i",&nb);
    for (i; i <= nb;i++)
    {
    	j = 1;
        for(j; j < i;j++)
        {
            printf("-");
        }
        j = 1;
        for(j ; j <= (nb - i);j++)
        {
            printf("*");
        }
        j = 1;
        j--;
        for (j;j <= (nb - i);j++)
        {
            printf("*");
        }
        
        printf("\n");

    }
    
    i = 1;
        for (i ;i <= nb;i++)
    {
    	
        j = 1;
        for (j;j <= (nb - i);j++)
        {
            printf("-");
        }
        j = 1;
        for(j;j < i;j++)
        {
            printf("*");
        }
        j = 1;
        j--;
        for(j;j < i;j++)
        {
            printf("*");
        }
        
        printf("\n");
        i++;

    }
    
    
    return 0;
}
