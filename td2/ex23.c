#include <stdio.h>
int main()
{
    int nb,i,n,r8,r10,r12,r15;
    float my8,my10,my12,my15;
    r8 = 0;
    r10 = 0;
    r12 = 0;
    r15 = 0;
    i = 0 ;
    printf("donner n ");
    scanf("%i",&n);
    while(i < n)
    {
        printf("nb%i = ",i);
        scanf("%i",&nb);
        if(nb >= 8)
        {
            r8++;
            if(nb >= 10)
            {
                r10++;
                if(nb >= 12)
                {
                    r12++;
                    if(nb >= 15)
                    {
                        r15++;
                    }

                }
            }
        }
        i++;
    }
    my8 = (float)r8/n * 100;
    my10 = (float)r10/n * 100;
    my12 = (float)r12/n * 100;
    my15 = (float)r15/n * 100;

    printf("sup 8 = %.2f%c \n",my8,'%');
    printf("sup 10 = %.2f%c \n",my10,'%');
    printf("sup 12 = %.2f%c \n",my12,'%');
    printf("sup 15 = %.2f%c \n",my15,'%');

    return 0;
}
