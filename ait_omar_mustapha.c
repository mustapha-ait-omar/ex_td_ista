#include <stdio.h>
#include <string.h>

struct list_student
{
    char name[30];
    int age;
    int note;
};



void give_info(int n,struct list_student list[n])
{
    
    int i = 0;
    while(i < n)
    {
    	
	    printf("==========================================\n");
		printf("         |  student number %i   |         \n",i + 1);
		printf("==========================================\n");
		
		printf("name    =>   ");
		scanf("%s",list[i].name);

		printf("age    =>   ");
		scanf("%i",&list[i].age);

        printf("note    =>   ");
		scanf("%i",&list[i].note);        
	

    	i++;
	}
	
}

void show_list(int n,struct list_student list[n])
{
    printf("=============================================================\n");
	printf("             |   show list info all students   |              \n");
    printf("=============================================================\n\n");
	int i = 0;
	while (i < n)
    {
    	
    	
        printf("Id = %i | name = %s  | age =  %i   |  note  %i \n\n",i + 1,list[i].name,list[i].age,list[i].note);
        i++;
    }
    printf("=============================================================\n");
    
}

void add_student(int n,struct list_student list[n])
{
	printf("=============================================================\n");
	printf("			|   Add new Student  |				              \n");
    printf("=============================================================\n\n");
    
    	
		printf("name    =>   ");
		scanf("%s",list[n].name);

		printf("age    =>   ");
		scanf("%i",&list[n].age);

        printf("note    =>   ");
		scanf("%i",&list[n].note);

}

void delete_student(int n,struct list_student list[n])
{
	int index,i = n;
	printf("index of the student : ");
	scanf("%i",&index);
	index--;
	while(index < n)
	{
		list[index] = list[index + 1];
		index++;
	}
}

void modify_student(int n,struct list_student list[n])
{
	int index,option = -1;

	printf("chose id you will modify : ");
	scanf("%i",&index);
	index--;

	printf("chose option you will modify");

	printf("1 : name\n");
	printf("2 : age\n");
	printf("3 : note\n");
	printf("0 : Cancel\n");
	
	printf("your choice : ");
	scanf("%i",&option);

	if(option == 0)
	{
	}
	else if(option == 1)
	{
		printf("name    =>   ");
		scanf("%s",list[index].name);
	}
	else if(option == 2)
	{
		printf("age    =>   ");
		scanf("%i",list[index].age);
	}
	else if(option == 3)
	{
		printf("note    =>   ");
		scanf("%s",list[index].note);
		option = -1;
	}
	else
	{
		printf("!!!! your choice incorrect try again !!!!");
	}
	
	
}

void reverce_string(char name1[],char name2[])
{
	char str[100];
	
	strcpy(str,name1);
	strcpy(name1,name2);
	strcpy(name2,str);
}


void reverce_lists(int n,struct list_student list[n],int i)
{
	int var;
	reverce_string(list[i].name,list[i + 1].name);
	
	var = list[i].age;
	list[i].age = list[i + 1].age;
	list[i + 1].age = var;
	
	var = list[i].note;
	list[i].note = list[i + 1].note;
	list[i + 1].note = var;
}


void order_list(int n,struct list_student list[n])
{
	int option,i,j;
	printf("1 : order by name ");
	printf("\n");
	printf("2 : order by age ");
	printf("\n");
	printf("3 : order by note ");
	printf("\n");

	printf("your choice : ");
	scanf("%i",&option);
	
	int var;
	struct list_student order[3];

	if(option == 1)
	{
		j = 0;
		while(j < n)
		{
			i = 0;
			while(i < n - 1)
			{
						
					if(strcmp(list[i].name,list[i + 1].name) > 0)
					{
						
						reverce_lists(n,list,i);
					}
				i++;
			}
			j++;
		}
	}
	else if(option == 2)
	{
		j = 0;
		while(j < n)
		{
			i = 0;
			while(i < n - 1)
			{
						
					if(list[i].age > list[i + 1].age)
					{
						reverce_lists(n,list,i);
					}
				i++;
			}
			j++;
		}
	}
	else if(option == 3)
	{
		j = 0;
		while(j < n)
		{
			i = 0;
			while(i < n - 1)
			{
						
					if(list[i].note > list[i + 1].note)
					{
						reverce_lists(n,list,i);
					}
				i++;
			}
			j++;
		}
	}
}

int search_max_note(int n,struct list_student list[n])
{
	int max,i,index;

	max = list[0].note;
	index = 0;
	 i = 0;
	while (i < n)
	{
		if (list[i].note > max)
		{
			index = i;
		}
		i++;
		
	}
	
	return index;
}


int main()
{
	
	int n,i,max,option = -1;
 
    printf("==========================================\n\n");
	printf("             |   welcome   |              \n\n");
	printf("        |   mustapha ait omar   |           \n\n");
	printf("==========================================\n\n");    
    printf("give numbers the students ");
    scanf("%i",&n);

    
    struct list_student list[100];
    
    
	give_info(n,list);
	
    while (option != 0)
    {
    	printf("==========================================\n");
		printf("             |   Options   |	              \n");
		printf("==========================================\n");
		 
    	printf("1 : show list");
    	printf("\n");
    	
    	printf("2 : New Student");
    	printf("\n");

        printf("3 : Delete Student");
    	printf("\n");
    	
    	printf("4 : Modify info Student");
    	printf("\n");

		printf("5 : show list order by");
    	printf("\n");

		printf("6 : max note");
    	printf("\n");

    	printf("0 : Go out");
    	printf("\n");

    	printf("your choice : ");
    	scanf("%i",&option);
        if(option == 0)
        {
    		printf("==========================================\n\n");
			printf("             |  Good BY   |              \n\n");
			printf("==========================================\n\n"); 
            break;
        }
        else if(option == 1)
        {
            show_list(n,list);
        }
        else if(option == 2)
		{
			add_student(n,list);
			n++;
		}
		else if(option == 3)
		{
			show_list(n,list);
			delete_student(n,list);
			n--;
		}
		else if(option == 4)
		{
			show_list(n,list);
			modify_student(n,list);
		}
		else if(option == 5)
		{
			show_list(n,list);
			order_list(n,list);
		}
		else if (option == 6)
		{
			printf("=============================================================\n");
			printf("             		|   show max note   |		              \n");
    		printf("=============================================================\n\n");
    		
			max = search_max_note(n,list);
			
			printf("max note = %i | name is %s \n",list[max].note,list[max].name);
			
			printf("=============================================================\n\n");
		}
		else
		{
    		printf("\n");
			printf("!!!! your choice incorrect try again !!!!");
			printf("\n");
		}
    }
    
    
  

    
    
    return 0;
}
