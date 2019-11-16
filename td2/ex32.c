#include <stdio.h>

int main()
{
    int i,j,nb,s;
    i = 1;
    s = 0;
    printf("Entrer le nombre de lignes : ");
    scanf("%i",&nb);
    s = nb;
    while (i <= nb)
    {
        j = nb - i;
        while (j >= 0)
        {
        	s += nb;
            printf("%i ",s);
            j--;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}
