#include<stdio.h>

int main()
{
    int i,n,car;
    i = 1;
    while (i <= 5)
    {
        scanf("%i",&n);
        car = n * n;
        printf("%i\n",car);
        i++;
    }
    
    return 0;
}
