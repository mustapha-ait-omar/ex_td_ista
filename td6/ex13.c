#include <stdio.h>

int git_data(int tab[100],int n,int nmax)
{
    int i = 0;
    if (n > nmax)
    {
        n = nmax;
    }
    while (i < n)
    {
        printf("donner la valeur index %i",i + 1);
        scanf("%i",&tab[i]);
        i++;
    }
    return n;
}

void show_data(int tab[100],int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%i | ",tab[i]);
        i++;
    }
}

int main()
{
    int n;
    int tab[100];
    int nmax = 2;
    printf("donner le nombre des elements");
    scanf("%i",&n);
    n = git_data(tab,n,nmax);
    show_data(tab,n);
    
}
