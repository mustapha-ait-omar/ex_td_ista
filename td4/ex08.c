#include<stdio.h>
#include <string.h>

int main()
{
	int n;
    char str[10];
	char je[10] = "je ";
	char tu[10] = "tu ";
	char il[10] = "il ";
	char nous[10] = "nous ";
	char vous[10] = "vous ";
	char ils[10] = "ils ";

    gets(str);
	n = 5;
	if(str[n - 1] == 'r' && str[n - 2] == 'e')
	{
		str[n - 1] = '\0';
		strcat(je,str);
		
		
		strcat(tu,str);
		strcat(tu,"s");
		
		strcat(il,str);
		
		strcat(vous,str);	
		strcat(vous,"z");
		

		strcat(ils,str);	
		strcat(ils,"nt");
		

		str[n - 2] = '\0';
		strcat(nous,str);
		strcat(nous,"ons");
		
	}
	

		printf("%s\n",je);
		
		printf("%s\n",tu);
		
		printf("%s\n",il);
		
		printf("%s\n",nous);
		
		printf("%s\n",vous);
		
		printf("%s\n",ils);



    return 0;
}
