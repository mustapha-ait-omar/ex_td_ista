#include <stdio.h>

int main()
{
    int n,i,index;

    index = 0;

    printf("donner la taille de tableau ");
    scanf("%i",&n);
    int tab1[n];
    int tab2[n];
    
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
    printf("results");
	printf("\n========================================\n");

    while(i < n)
    {
        if (tab1[i] != tab2[i])
        {
            index = 1;
        }
        
        i++;
    }

    if (index == 0)
    {
        printf("les tableau sont egaux");
    }
    else
    {
        printf("les tableau sont diffirent");
    }
    
    

    return 0;

}
