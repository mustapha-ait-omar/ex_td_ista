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
    
    i = 0;
    while (i < n + 1)
    {
            while (j < n)
            {
                if (tab[j] > tab[j + 1])
                {
                    c = tab[j + 1];
                    tab[j + 1] = tab[j];
                    tab[j] = c;
                }
                
                j++;
            }
            j = 0;
        i++;
    }
    i =  0;
    while (i < n)
    {
        printf("%i\n",tab[i]);
        i++;
    }
    
    return 0;
}
