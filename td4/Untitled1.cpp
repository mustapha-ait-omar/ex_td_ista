#include <stdio.h>
#include <string.h>

struct list_student
{
    char name[30];
    int age;
    int note;
};

int main()
{
	
	int n,i,max,option = -1;
   


    
    struct list_student s;
    
	gets(s.name);
	s.age = 10;
	s.note = 10;
	
	
	printf("%s",s.name);
 
    return 0;
}
