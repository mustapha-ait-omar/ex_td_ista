#include<stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    int i;
    printf("la chaine 1 : ");
    gets(str1);

    printf("la chaine 2 : ");
    gets(str2);

    i = strcmp(str1,str2);

    if(i = 1)
    {
        printf("'%s' precede '%s'",str1,str2);
    }
    else
    {
        printf("'%s' precede '%s'",str2,str1);
    }
    

    return 0;
}
