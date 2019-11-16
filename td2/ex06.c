#include<stdio.h>

int main()
{
    int i,n;
    i = 1;
    scanf("%i",&n);
    while (i < n)
    {
        if(i % 3 == 0)
        {
            printf("%i ",i);
        }
        i++;
    }
    
    return 0;
}
