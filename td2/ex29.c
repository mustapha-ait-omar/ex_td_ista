#include <stdio.h>

int main()
{
    int i,j,nb;
    printf("Entrer le nombre de lignes :");
    scanf("%i",&nb);
    i = 1;
    while(i <= nb)
    {
        j = 1;
        while(j < i)
        {
           printf(" ");
           j++; 
        }
        printf("*");
        printf("\n");
        i++;
    }
    return 0;
}
