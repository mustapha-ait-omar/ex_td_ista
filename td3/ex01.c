#include <stdio.h>

int main()
{
    int n,i,val,som;
    float moy,pr;
    printf("donner le nembre des notes ");
    scanf("%i",&n);
    
    int tab[n];
    som = 0;
    i = 0;
    while (i <= n - 1)
    {
        printf("Note %i = ",i + 1);
        scanf("%i",&val);
        
        tab[i] = val;
        som = som + val;
        i++;
        
    }
    pr = 1;
    moy = (float) som / n;
    printf("moy = %.2f\n",moy);
    i = 0;
    while(i < n - 1)
    {
    	if(tab[i] >= moy)
    	{
    		pr = (float) pr + 1;
		}
    	i++;
	}
	pr = (pr / n)*100;
	printf("pr = %.2f",pr);
	
	    
    

    return 0;
}
