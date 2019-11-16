#include <stdio.h>

int main()
{
    int i,j,nb;
    i = 1;
    j = 1;
    
    printf("Entrer le nomber de lignes : ");
    scanf("%i",&nb);

    while (i <= nb)
    {
        j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        
        printf("\n");
        i++;
    }
    
    return 0;
}