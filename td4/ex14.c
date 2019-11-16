#include<stdio.h>
#include <string.h>

int main()
{
    char str1[10],str2[10],str3[10];
    char s1[10];
    int r1,r2,r3;

    gets(str1);
    gets(str2);
    gets(str3);



	
    
    r1 = strcmp(str1,str2);
    r2 = strcmp(str1,str3);
    r3 = strcmp(str2,str3);

 
	if (r1 > 0)
	{
		strcpy(s1,str2);
		strcpy(str2,str1);
		strcpy(str1,s1);
	}

	if (r2 > 0)
	{
		strcpy(s1,str3);
		strcpy(str3,str1);
		strcpy(str1,s1);
	}

	if (r3 > 0)
	{
		strcpy(s1,str3);
		strcpy(str3,str2);
		strcpy(str2,s1);
	}
	
 	
	
	
	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);	
    

    



    return 0;
}
