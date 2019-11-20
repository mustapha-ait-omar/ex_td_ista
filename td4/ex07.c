#include<stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int c;
    int n,i;
    printf("la chaine  : ");
    gets(str);

    n = strlen(str);
    c = 0;
    i = 0;
    while (i < n/2)
    {
        if(str[i] != str[n - 1 - i])
        {
            c = 1;
            break;
        }
        i++;
        
    }
    
    if(c == 0)
    {
        printf("pallindrom");
    }
    else
    {
        printf("n' pas palindrome");
    }
    
    
    printf("\n");



    return 0;
}
