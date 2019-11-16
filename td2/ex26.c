#include <stdio.h>
#include <unistd.h>
int main()
{
    char c = 'c';
    char d;
    int i = 0;
	int a = 0;
    while(c != '*')
    {
    	c = getchar();
    	i++;
    	if(c == ',' || c == '.' || c == '!' || c == ';' || c == '?' || c == ':')
    	{
    		a++;
		}
    }
    printf("%i\n",i--);
    printf("%i\n",a);
    return 0;
}
