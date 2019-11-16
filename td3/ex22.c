#include <stdio.h>

int main()
{
    int i,j,n,x;

	
    printf("\n========================================\n");
    printf("les valeurs de tableau");
	printf("\n========================================\n");

    printf("donner la taille de tableau ");
    scanf("%i",&n);
    int tab[n + 1];
     i = 0;
    while(i < n)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%i",&tab[i]);
        i++;
    }
    printf("donner x ");
    scanf("%i",&x);
    tab[i] = x;

    i = 0;
    while (i < n + 1)
    {
        printf("%i\n",tab[i]);
        i++;
    }
    
    return 0;
}
