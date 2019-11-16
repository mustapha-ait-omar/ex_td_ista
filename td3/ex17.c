#include <stdio.h>

int main()
{
    int i,j,n,val;

	
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

    printf("\n========================================\n");
    printf("invers de tableau");
	printf("\n========================================\n");
    i = 0;
   for (i = 0;i <= n / 2 - 1;i++)
   {
       	val = tab[i];
       	tab[i] = tab[n - i -1];
    	tab[n - i -1 ] = val;
       
   }
   i = 0;
   while (i < n)
   {
       printf("%i\n ",tab[i]);
       i++;
   }
   

    return 0;
}
