#include <stdio.h>

int main()
{
    int i,nb,j;
    i = 1;
    j = 1;
    printf("n = ");
    scanf("%i",&nb);



    while (j <= 2*(nb + 1) + 1)
    {
            printf("*");
            j++;
    }
    printf("\n");
    





    while (i <= nb)
    {

    	j = 0;
        
        while(j < i)
        {
            printf("-");
            j++;
        }
        j = 1;
        while (j <= (nb - i))
        {
            printf("*");
            while (j <= (nb - i))
            {
                printf("-");
                j++;
            }
            
            j++;
        }
        j = 1;
        j--;
        while (j <= (nb - i))
        {
            while (j <= (nb - i))
            {
            printf("-");
                j++;
            }
            printf("*");
            j++;
        }
        
        printf("\n");
        i++;

    }
    i = 2;
        while (i <= nb)
    {
    	
        j = 0;
        while (j <= (nb - i))
        {
            printf("-");
            j++;
        }
        j = 1;
        while(j < i)
        {
            printf("*");
            while(j < i)
        	{
            printf("-");
            j++;
        	}
            j++;
        }
        j = 1;
        j--;
        while(j < i)
        {
            
            while(j < i)
        	{
            	printf("-");
            	j++;
        	}
        	printf("*");
            j++;
        }
        
        printf("\n");
        i++;

    }
    j = 1;
    while (j <= 2*(nb + 1)+1)
    {
            printf("*");
            j++;
    }
    return 0;
}
