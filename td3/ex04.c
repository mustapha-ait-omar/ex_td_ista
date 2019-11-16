#include <stdio.h>

int main()
{
    int i,n,val,np,ns;

    printf("donner la nembres des valuers ");
    scanf("%i",&n);

    int tab[n];
    while(i <= n)
    {
        printf("value %i",i + 1);
        scanf("%i",&tab[i]);
        i++;
    }

    i = 0;

    while(i <= 0)
    {
        if(tab[i] < 0)
        {
            printf("%i \n",tab[i]);
            i++;
        }
    }
    i = 0;
    while(i <= 0)
    {
        if(tab[i] < 0)
        {
            printf("%i \n",tab[i]);
            i++;
        }
    }
    return 0;
}