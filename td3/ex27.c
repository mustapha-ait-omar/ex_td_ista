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
    c = 0;
    while (i < n + 1)
    {
    	
        if(tab[i] == x)
        {
            j = i;
            while (j < n)
            {
                tab[j] = tab[j + 1];
                j++;
            }
            i--;
            c++;
        }
        i++;
    }
    i =  0;
    while (i < n - c)
    {
        printf("%i\n",tab[i]);
        i++;
    }
    
    return 0;
}
