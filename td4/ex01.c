#include<stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,space;
    printf("votre nom : ");
    gets(str);
    

    printf("Bonjour %s !\n",str);
    i = 0;
    space = 0;
    while(str[i] != '\0')
    {
    	if(str[i] == ' ')
    	{
    		space++;	
		}
    	i++;
	}

    printf("votre nom est compose de %i lettre",strlen(str) - space);




    return 0;
}
