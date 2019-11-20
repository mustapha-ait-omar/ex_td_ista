#include<stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char c;
    int n,i;
    printf("la chaine  : ");
    gets(str);

    n = strlen(str);

    i = 0;
    while (i < n/2)
    {
        
        c = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = c;
        i++;
    }
    
    printf("reverce of the string : %s",str);
    
    printf("\n");



    return 0;
}
