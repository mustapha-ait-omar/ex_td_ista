#include <stdio.h>
#include <string.h>

int main()
{
	
	// progarme for delete all space in string
    char str[100];
    int n,i,j;

    printf("enter string ");
    gets(str);
    n = strlen(str);

    printf("your string is : '%s' \n",str);
	i = 0;
    while(str[i] != '\0')
    {
    	if(str[i] == ' ' || str[i] == '\t')
        {
            j = i;
            while(j < n)
            {
                str[j] = str[j + 1];
                j++;
            }
            i--;
            n--;
            
        }

        i++;
	}
    str[i] = '\0';

    printf("new string is '%s'",str);
    return 0;
}
