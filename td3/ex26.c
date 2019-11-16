#include <stdio.h>

int main()
{
    int i,j,n,x,p,c;

	
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

    i = 0;
    while(i < n)
    {
        if (x <= tab[i + 1] && x >= tab[i])
        {
            p = i + 1;
        }
        
        i++;
    }

    i = n + 1;
    while (i > p)
    {
            tab[i] = tab[i - 1];
        i--;
    }
    tab[p] = x;
     i = 0;
    while (i < n + 1)
    {
        printf("%i\n",tab[i]);
        i++;
    }
    
    return 0;
}
