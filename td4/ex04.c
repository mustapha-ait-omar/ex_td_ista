#include<stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char c;
    int n,i,count;
    printf("la chaine  : ");
    gets(str);

    printf("caracter : %c",c);
    scanf("%c",&c);

    n = strlen(str);
    count = 0;
    i = 0;
    while (i < n)
    {
        if(str[i] == c)
        {
            count++;
        }
        i++;
    }
    
    
    printf("count = %i ",count);

    return 0;
}
