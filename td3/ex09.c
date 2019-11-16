#include <stdio.h>

int main()
{
    int i,n,val,np,ns;

    printf("donner la nembres des valuers ");
    scanf("%i",&n);

    int T1[n];
    int T2[n];
    int T3[n];
    i = 0;
    printf("tableau 1\n===========================\n");
    while(i < n)
    {
        printf("value %i ",i + 1);
        scanf("%i",&T1[i]);
        i++;
    }
    i = 0;
    printf("tableau 2\n===========================\n");
    while(i < n)
    {
        printf("value %i ",i + 1);
        scanf("%i",&T2[i]);
        i++;
    }
	i = 0;
    printf("tableau 3\n============================\n");
    while(i < n)
    {
        T3[i] = T1[i] + T2[i];
        i++;
    }
    i = 0;
    while(i < n)
    {
        printf("%i\n",T3[i]);
        i++; 
    }
    return 0;

}
