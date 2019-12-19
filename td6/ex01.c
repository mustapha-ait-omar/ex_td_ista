#include <stdio.h>


int produit(int v1,int v2)
{
    int p = v1 * v2;
    return p;
}

int main()
{
    int v1,v2,p;

    scanf("%i",&v1);
    scanf("%i",&v2);

    p = produit(v1,v2);

    printf("%i * %i = %i",v1,v2,p);

    return 0;
}
