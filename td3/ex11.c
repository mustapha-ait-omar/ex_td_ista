#include<stdio.h>

int main()
{
    int n,i,j,exp;

    i = 0;
    float x,p,pr;
    x = 1;
    p = 0;
    printf("donner la degre de polynome n ");
    scanf("%i",&n);

    int A[n + 1];
    while(i <= n)
    {
        printf("donner a%i ",i);
        scanf("%i",&A[i]);
        i++;
    }
    
    printf("donner x ");
    scanf("%f",&x);
    i = 0;
    exp = n;
    while(i <= n)
    {
        j = 1;
        pr = 1;
        while (j <= exp)
        {
            pr = pr * x;
            j++;
        }
        exp--;

        p = p + (pr * (float) A[i]);
        i++;
    }
    printf("\n");
    printf("%f",p);

    return 0;
}
