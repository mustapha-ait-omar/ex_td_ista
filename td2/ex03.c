#include <stdio.h>

int main()
{
    int i,n;
    n = 101;
    while (n > 100 || n < 0)
    {
        printf("donner un enteir prositive et nigative ");
        scanf("%i",&n);
    }
    printf("merci pour %i",n);
    
    return 0;
}