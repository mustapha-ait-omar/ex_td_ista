#include <stdio.h>

int main()
{
    int n,i;

    printf("donner la taille de tableau ");
    scanf("%i",&n);
    float tab[n];
     i = 0;
    while(i < n)
    {
        printf("donner la valuer %i ",i + 1);
        scanf("%f",&tab[i]);
        if (tab[i] >= 100)
        {
            tab[i] = tab[i] + tab[i]/10;
        }
        
        i++;
    }
    i = 0;
    printf("\n=================================================\n");
    printf("les resultas ");
    printf("\n=================================================\n");
    while(i < n)
    {
        printf("%.2f\n",tab[i]);
        i++;
    }
    return 0;
}
