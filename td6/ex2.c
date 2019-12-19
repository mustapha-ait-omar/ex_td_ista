#include <stdio.h>


int moyen(int v1,int v2)
{
    int moy = (v1 + v2)/2;
    return moy;
}

int main()
{
    int v1,v2,moy;

    scanf("%i",&v1);
    scanf("%i",&v2);

    moy = moyen(v1,v2);

    printf("moyen de %i et %i = %i",v1,v2,moy);

    return 0;
}
