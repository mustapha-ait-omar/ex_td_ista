#include<stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100],str3[100];
    int n1,n2,i,j;
    printf("la chaine 1 : ");
    gets(str1);

    printf("la chaine 2 : ");
    gets(str2);
    n1 = strlen(str1);
    n2 = strlen(str2);
	i = 0;
	j = 0;
    while (i < n1/2)
    {
        str3[i] = str1[i];
        j++;
        i++;
    }
    i = 0;
    while (i < n2/2)
    {
        str3[j] = str2[i];
        j++;
        i++;
    }
    printf("str1 : %s",str1);
    printf("\n");
    printf("str2 : %s",str2);
	printf("\n");
    printf("str3 : %s",str3);    
	printf("\n");
    return 0;
}
