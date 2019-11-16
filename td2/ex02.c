#include <stdio.h>

int main()
{
    int i,n;
    n = -1;
    while (n < 0)
    {
        printf("donner un nombre positive");
        scanf("%i",&n);
        if (n < 0)
        {
            printf("%i < 0",n);
        }
    } ;
    printf("star de traitment...");
    
    return 0;
}