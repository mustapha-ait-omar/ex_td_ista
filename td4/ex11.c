#include <stdio.h>
#include <string.h>

int main()
{
	
	// progarme for delete all space in string
    char str[100];
    int n,i,j,fin,deb;

    printf("enter string ");
    gets(str);
    n = strlen(str);

    printf("your string is : '%s' \n",str);
	i = 0;
    fin = 0;
    deb = 0;

    	// code for delete all space in start the string
    i = 0;
    while(str[i] != '\0' && str[i] == ' ')
    {
        
    	if(str[i] == ' ')
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
    
    // code for delet all space in end the string
    while(str[i] != '\0')
    {
        j = i;
        while(str[j] != '\0')
        {
            if(str[j] == ' ' || str[j] == '\0')
            {
                fin = 1;
                j++;
            }
            else
            {
                fin = 0;
                break;
            }
            
        }
    	if(fin == 1)
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
