#include <stdio.h>

int main()
{
    int i,n,val,s,p;
    float moy;
    p = 1;
    s = 0;
    i = 0;
    printf("n = ");
    scanf("%i",&n);
    while (i < n)
    {
        scanf("%i",&val);
        p = p * val;
        s = s + val;
        i++;
    }
    moy = (float) s / n;

    printf("p = %i\n",p);
    printf("s = %i\n",s);
    printf("moy = %.2f\n",moy);    
    return 0;
}
