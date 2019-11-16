#include <stdio.h>

int main()
{
    int i,j,c,l,s,p;
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
    /*
    printf("\n========================================\n");
    printf("affichie le tableau");
	printf("\n========================================\n");
    i = 0;
    while(i < c)
    {
        j = 0;
        while(j < l && i != j)
        {
            printf(" %i |",tab[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    */
    
    printf("\n========================================\n");
    printf("result");
	printf("\n========================================\n");


	p = 0;
    i = 0;
    j = c;
    while(i < c)
    {
        j = 0;
        while(j < l && i != j)
        {
            if(tab[i][j] != tab[j][i])
            {
                s = 1;
            }
            p++;
            j++;
        }
        i++;
    }


    if(s == 0)
    {
    	printf("le tableau est symetrique");
    	
	}
	else
	{
		printf("le tableau pas symetrique");
	}
    

    printf("\n========================================\n");
    printf("fin de ex");
	printf("\n========================================\n");



    return 0;
}
