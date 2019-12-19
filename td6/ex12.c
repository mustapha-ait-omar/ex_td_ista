#include <stdio.h>

void git_data(int tab[100],int n)
{
    int i = 0;

    while (i < n)
    {
        printf("donner la valeur index %i",i + 1);
        scanf("%i",&tab[i]);
        i++;
    }
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
int sommetab(int tab[100],int n)
{
    int i = 0;
    int s = 0;
    while (i < n)
    {
        s = s + tab[i];
        i++;
    }
    
    return s;
}

int main()
{
    int n;
    int tab[100];
    printf("donner le nombre des elements");
    scanf("%i",&n);
    git_data(tab,n);
    show_data(tab,n);
    printf("\nla somme d element en tableuat tab est %i",sommetab(tab,n));
    
}
