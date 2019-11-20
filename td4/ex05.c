#include<stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char c;
    int n,i,voyChar,conChar,authChar;
    printf("la chaine  : ");
    gets(str);

    n = strlen(str);
    voyChar = 0;
    conChar = 0;
    authChar = 0;
    i = 0;
    while (i < n)
    {
        if((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A'))
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'y'||
             str[i] == 'u' || str[i] == 'i' || str[i] == 'o' || 
             str[i] == 'A' || str[i] == 'E' || str[i] == 'Y'||
             str[i] == 'U' || str[i] == 'I' || str[i] == 'O' 
             )
             {
                voyChar++;
             }
             else
             {
                 conChar++;
             }
            
        }
        else
        {
            authChar++;
        }
        
        
        i++;
    }
    
    
    printf("les consonnes : %i",conChar);
    printf("\n");
    printf("les voyells : %i",voyChar);
    printf("\n");
    printf("les autres : %i",authChar);
    printf("\n");



    return 0;
}
