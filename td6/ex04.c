#include <stdio.h>


int compare(int v1,int v2)
{
    if(v1 > v2)
    {
        return 1;
    }
    else if(v1 < v2)
    {
        return (-1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int v1,v2,com;

    scanf("%i",&v1);
    scanf("%i",&v2);
     com = compare(v1,v2);
     if(com > 0)
     {
         printf("%i > %i",v1,v2);
     }
     else if(v1 < v2)
     {
        printf("%i > %i",v2,v1);
     }
     else
     {
         printf("%i = %i",v1,v2);
     }
    return 0;
}














































+++++++++++++++++++*66666***