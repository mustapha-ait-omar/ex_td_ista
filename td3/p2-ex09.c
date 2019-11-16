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
    int sl[l];
    int sc[c];
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

//la somme chaque line

    i = 0;
    while(i < c)
    {
        s = 0;
        j = 0;
        while(j < l)
        {
            s = s + tab[i][j];
            j++;
        }
        sl[i] = s;
        i++;
    }

    //la somme chaque colum

    i = 0;
    while(i < l)
    {
        s = 0;
        j = 0;
        while(j < c)
        {
            s = s + tab[j][i];
            j++;
        }
        sc[i] = s;
        i++;
    }
    
			i = 0;
		    while(i < l)
		    {
		    	printf("la somme de line %i est %i : \n",i + 1,sl[i]);
		    	i++;
			}
			i = 0;
		    while(i < c)
		    {
		    	printf("la somme de colume %i est %i : \n",i + 1,sc[i]);
		    	i++;
			}


    printf("\n========================================\n");
    printf("fin de ex");
	printf("\n========================================\n");



    return 0;
}
