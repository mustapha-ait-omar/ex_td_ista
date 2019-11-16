#include<stdio.h>

int main()
{
    int i,n;
    i = 3;
    printf("donner n");
    scanf("%i",&n);
    while (i < n)
    {
        if(i % 3 == 0)
        {
            printf("%i\n",i);
        }
        i++;
    }
    
    return 0;
}
