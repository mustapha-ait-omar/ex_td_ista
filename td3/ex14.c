#include <stdio.h>

int main()
{
    int n,i,index;

    printf("donner la taille de tableau ");
    scanf("%i",&n);
    int tab1[n];
    int tab2[n];
    
    index = 0;
    
    i = 0;
    
    printf("\n========================================\n");
    printf("donner les valuers de tableau 1");
	printf("\n========================================\n");

    while(i < n)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%i",&tab1[i]);       
        i++;
    }

    i = 0;

    printf("\n========================================\n");
    printf("donner les valuers de tableau 2");
	printf("\n========================================\n");

    while(i < n)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%i",&tab2[i]);
        i++;
    }

    i = 0;

    printf("\n========================================\n");
    printf("la valeur d\'index");
	printf("\n========================================\n");

    while(i < n)
    {
        if (tab1[i] == tab2[i])
        {
            index++;
        }
        
        i++;
    }

    printf("index = %i",index);

    return 0;

}
