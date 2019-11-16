#include <stdio.h>

int main()
{
     int i,imp,ip,n,val,np,ns;

    printf("donner la nembres des valuers ");
    scanf("%i",&n);
    ip = 0;
    imp = 0;
    int tab[n];
    i = 0;
    while(i < n)
    {
        printf("value %i ",i + 1);
        scanf("%i",&val);
        tab[i] = val;
        if(val % 2 == 0)
        {
            ip = ip + 1;
        }
        else
        {
            imp++;
        }
        i++;
        
    }
    i = 0;
    int tip[ip];
    int timp[imp];
    ip = 0;
    imp = 0;
    while(i < n)
    {
        if(tab[i] % 2 == 0)
        {
            tip[ip] = tab[i];
            
            ip++;
        }
        else
        {
            timp[imp] = tab[i];
            imp++;
        }
        i++;
    }
    printf("les nembres paire \n =========================\n");
    i = 0;
    while(i < ip)
    {
        printf("%i\n",tip[i]);
        i++;
    }
     printf("les nembres impaire \n =========================\n");
    i = 0;
    while(i < imp)
    {
        printf("%i\n",timp[i]);
        i++;
    }
    return 0;
}
