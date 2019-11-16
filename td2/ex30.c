#include <stdio.h>

int main()
{
    int nb;
    int i,j,s;
    i = 1;
    j = 1;
    s = 1;
    printf("entrer la hauteur du triangle : ");
    scanf("%i",&nb);

    while (i <= nb)
    {
    	j = nb - i;
    	while(j > 0)
    	{
    		printf(" ");
    		j--;
		}
        s++;
        j = 1;
        while(j < s)
        {
            printf("*");
            j++;
        }
        j = 1;
        j++;
        while(j < s)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}
