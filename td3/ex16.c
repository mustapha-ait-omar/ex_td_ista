#include <stdio.h>

int main()
{
    int i,j,n1,n2,prod;

    printf("\n========================================\n");
    printf("donner les valuers de tableau 1");
	printf("\n========================================\n");

    printf("donner la taille de tableau 1 ");
    scanf("%i",&n1);
    int tab1[n1];
     i = 0;
    while(i < n1)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%i",&tab1[i]);
        i++;
    }

    printf("\n========================================\n");
    printf("donner les valuers de tableau 2");
	printf("\n========================================\n");

    printf("donner la taille de tableau 2 ");
    scanf("%i",&n2);
    int tab2[n2];
     i = 0;
    while(i < n2)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%i",&tab2[i]);
        i++;
    }


    /*
    =============================================================
    la produit
    =============================================================
    */
    i = 0;
prod = 0;
   while (i < n2)
   {
       j = 0;
       while (j < n1)
       {
       		
           prod = prod + tab2[i] * tab1[j];
           
           j++;
       }
       i++;
       
   }


    printf("\n========================================\n");
    printf("la produit ");
	printf("\n========================================\n");

   printf("prod = %i",prod);

    return 0;
}
