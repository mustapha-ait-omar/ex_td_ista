#include <stdio.h>
#include <string.h>

int main()
{
	
	// progarme for delete all space in string
    char str1[100],str2[100];
    int n1,n2,i,j,p;

    printf("string 1 ");
    gets(str1);

    printf("string 2");
    gets(str1);

    n1 = strlen(str1);
    n1 = strlen(str2);
    
    printf("position : ");
    scanf("%i",&p);
    
    


	i = 0;
    while(str1[i] != '\0')
    {
    	if(i = p)
    	{
    		j = n1 + n2;
    		while(j < i)
    		{
    			str1[n1 - i] = str[n1 + n2]
    			i++;
			}
    		str[i] == str[i];
		}
        i++;
	}
    str1[i] = '\0';

    printf("new string is '%s'",str1);
    return 0;
}
