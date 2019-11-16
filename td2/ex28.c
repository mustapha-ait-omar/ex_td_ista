#include <stdio.h>

int main()
{
    int i,j,nbc,nbl;
    printf("Entrer le nombre de lignes :");
    scanf("%i",&nbl);
    printf("Entrer le nombre de cararcter par ligne :");
    scanf("%i",&nbc);

    while(i <= nbl)
    {
        j = 1;
        while(j <= nbc)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
