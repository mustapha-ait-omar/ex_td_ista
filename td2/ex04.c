#include<stdio.h>

int main()
{
    int a,n,i;
    printf("valeur initiale et nombre de valeurs ");
    scanf("%i %i",&n,&a);
    i = n;
    while (i <n + a)
    {
        printf("%i\n",i);
        i++;
    }
    
    return 0;
}
