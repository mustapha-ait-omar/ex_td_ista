#include <stdio.h>

int main()
{
    int i,j,n,x;

	
    printf("\n========================================\n");
    printf("les valeurs de tableau");
	printf("\n========================================\n");

    printf("donner la taille de tableau ");
    scanf("%i",&n);
    int tab[n];
    int posi[n];
     i = 0;
    while(i < n)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%i",&tab[i]);
        i++;
    }

    i = 0;
    j = 0;
    printf("donner x ");
    scanf("%i",&x);
    while(i < n)
    {
        if(x == tab[i])
        {
        	posi[j] = i;
            j++;
        }

        i++;
    }

    printf("%i\n",j);
    printf("la premier position est %i ",posi[0]);
    return 0;
}
