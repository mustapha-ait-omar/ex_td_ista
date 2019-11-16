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
    printf("les valeurs de tableau 1");
	printf("\n========================================\n");

    int tab[c][l],tab2[c][l],stab[c][l];
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
    printf("affichie le tableau 1");
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


    printf("\n========================================\n");
    printf("les valeurs de tableau 2");
	printf("\n========================================\n");


    i = 0;
    while(i < c)
    {
        j = 0;
        while(j < l)
        {
            printf("donner la valeur de tab2[%i][%i] ",i,j);
            scanf("%i",&tab2[i][j]);
            j++;
        }
        printf("==============================\n");
        i++;
    }

    printf("\n========================================\n");
    printf("affichie le tableau 2");
	printf("\n========================================\n");
    i = 0;
    while(i < c)
    {
        j = 0;
        while(j < l)
        {
            printf(" %i |",tab2[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }


    printf("\n========================================\n");
    printf("l' addition des tableaus");
	printf("\n========================================\n");

        i = 0;

        while(i < c)
        {
            j = 0;
            while(j < l)
            {
                stab[i][j] = tab[i][j] + tab2[i][j];
                j++;
            }
            i++;
        }

        i = 0;
        while(i < c)
        {
            j = 0;
            while(j < l)
            {
                printf(" %i |",stab[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }










    return 0;
}
