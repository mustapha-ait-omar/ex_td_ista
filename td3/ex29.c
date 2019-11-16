#include <stdio.h>

int main()
{
    int i,j,n,xfin,dip,;

	
    printf("\n========================================\n");
    printf("les valeurs de tableau");
	printf("\n========================================\n");

    printf("donner la taille de tableau ");
    scanf("%i",&n);
    int tab[n + 1];
     i = 0;
    while(i < n)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%i",&tab[i]);
        i++;
    }
    
    
    printf("\n========================================\n");
    printf("print value of the table");
	printf("\n========================================\n");
	i = 0;
	while(i < n)
	{
		printf("%i\n",tab[i]);
		i++;
	} 
    
    printf("\n========================================\n");
    printf("insertion de valeur x");
	printf("\n========================================\n");

    printf("donner la valeur de x ");
    scanf("%i",&x);

    int nx,Rx[n + 1];
    i = 0;
    nx = 0;
    while(i < n/2)
    {
        if(x = tab[i])
        {
            tab[i]
        }
    }

    printf("\n========================================\n");
    printf("print positions of the %i",x);
	printf("\n========================================\n");

    i = 0;
    while (i < nx)
    {
        printf("%i\n",Rx[i]);
        i++;
    }
    
    
    return 0;
}
