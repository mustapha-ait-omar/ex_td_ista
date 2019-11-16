#include <stdio.h>

int main()
{
    int i,j,c,l;
    
    

    printf("donner le nombre des culom ");
    scanf("%i",&c);
    printf("donner le nombre des lines ");
    scanf("%i",&l);
    
    printf("\n========================================\n");
    printf("les valeurs de tableau");
	printf("\n========================================\n");

    int tab[c][l];
    i = 0;
    while(i < c)
    {
        j = 0;
        while(j < l)
        {
           tab[i][j] = 0;
            j++;
        }
        i++;
    }
    
    printf("\n========================================\n");
    printf("affichie le tableau");
	printf("\n========================================\n");
    i = 0;
    while(i < c)
    {
        j = 0;
        while(j < l)
        {
            printf(" %i |",tab[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
