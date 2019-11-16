#include <stdio.h>

int main()
{
    int i,j,c,l,s;
    s = 0;
    

    printf("donner le nombre des culom ");
    scanf("%i",&c);
    
    printf("\n========================================\n");
    printf("les valeurs de tableau");
	printf("\n========================================\n");

    int tab[c][c];
    i = 0;
    while(i < c)
    {
        j = 0;
        while(j < c)
        {
            printf("donner la valeur de tab[%i][%i] ",i,j);
            scanf("%i",&tab[i][j]);
            j++;
        }
        printf("==============================\n");
        i++;
    }
    
    printf("\n========================================\n");
    printf("affichie le tableau apres le traitment");
	printf("\n========================================\n");
    i = 0;
    while(i < c)
    {
        tab[i][i] = 0;
        i++;
    }

    printf("\n========================================\n");
    printf("affichie le tableau");
	printf("\n========================================\n");
    i = 0;
    while(i < c)
    {
        j = 0;
        while(j < c)
        {
            printf(" %i |",tab[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }


    return 0;
}
