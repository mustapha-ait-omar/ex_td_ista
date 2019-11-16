#include <stdio.h>

int main()
{
    int n;
    printf("Suite de fabonacci\n");
    printf("donner un nember");
    scanf("%i",&n);
    int i = 2;
    int u,a,b;
    a = 1;
    b = 1;
    
    while(i <= n)
    {
    	printf("a = %i \nb = %i\n",a,b);
        u = a + b;
        printf("U%i = %i\n",i,u);
        printf("================================\n");
        b = a;
		a = u;
        i++;
    }
    printf("U%i = %i",--i,u);
    
    return 0;
}
