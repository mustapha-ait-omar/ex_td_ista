#include <stdio.h>

int main()
{
    int i,j,c,l,s,max,min;
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

//search of max value
max = tab[0][0];
    i = 0;
    while(i < c)
    {
        j = 0;
        while(j < l)
        {
            if(tab[i][j] > max){
                max = tab[i][j];
            }
            j++;
        }
        printf("\n");
        i++;
    }




    printf("\n========================================\n");
    printf("affichie max de tableau");
	printf("\n========================================\n");

    printf("max est %i",max);

    printf("\n========================================\n");
    printf("fin de ex");
	printf("\n========================================\n");



    return 0;
}
