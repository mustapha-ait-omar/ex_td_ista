#include <stdio.h>

int main()
{
    int i,j,c,l,s;
    s = 0;
    

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
            printf("donner la valeur de tab[%i][%i] ",i,j);
            scanf("%i",&tab[i][j]);
            j++;
        }
        printf("==============================\n");
        i++;
    }
    
    printf("\n========================================\n");
    printf("affichie la somme des valuer de tableau");
	printf("\n========================================\n");
    i = 0;
    while(i < c)
    {
        j = 0;
        while(j < l)
        {
            s = s + tab[i][j];
            j++;
        }
        i++;
    }

    printf("la somme est %i ", s);


    return 0;
}