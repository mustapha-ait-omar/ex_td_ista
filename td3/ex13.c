#include <stdio.h>

int main()
{
    int n,i,p;
    p = 0;

    printf("donner la taille de tableau ");
    scanf("%i",&n);
    int tab[n];
    
    i = 0;
    
    while(i < n)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%i",&tab[i]);
		if(tab[i] >= 0)
		{
			p++;	
		}       
        i++;
    }
    int tabp[p];
    i = 0;
    p = 0;
    while(i < n)
    {   
    	if(tab[i] >= 0)
    	{
    		tabp[p] = tab[i];
    		p++;
		}
        i++;
    }
    i = 0;
	printf("\n========================================\n");
    printf("tout les valuers ");
	printf("\n========================================\n");    
    while(i < n)
    {   
    	printf("%i\n",tab[i]);
        i++;
    }
    
    printf("\n========================================\n");
    printf("tout les valuers positif ");
	printf("\n========================================\n");
	i = 0;
    while(i < p)
    {   
    	printf("%i\n",tabp[i]);
        i++;
    }

    return 0;

}
