#include <stdio.h>

int main()
{
    int i,j,n,max,min,p;

	
    printf("\n========================================\n");
    printf("les valeurs de tableau");
	printf("\n========================================\n");

    printf("donner la taille de tableau ");
    scanf("%i",&n);
    int tab[n];
     i = 0;
    while(i < n)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%i",&tab[i]);
        i++;
    }
    
    max = tab[0];
    min = tab[0];
    p = 0;
    i = 0;
    while (i < n)
    {
        if (tab[i] >= max)
        {
            max = tab[i];
            p = i + 1;
        }
        i++;
    }
    
    printf("max = %i\n",max);
    printf("position = %i\n",p);
    
    return 0;
}
