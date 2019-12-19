#include <stdio.h>
#include <string.h>

struct list_student
{
    int code;
    char name[30];
    int age;
    int note1;
    int note2;
    int note3;
	float moy;
    int date;
    int month;
    int year;
};



void give_info(int n,struct list_student list[n])
{
    float moy;
    int i = 0;
    while(i < n)
    {
    	
	    printf("==========================================\n");
		printf("         |  student number %i   |         \n",i + 1);
		printf("==========================================\n");
		
        list[i].code = i;

		printf("name    =>   ");
		//scanf("%s",list[i].name);
		fflush(stdin);
		gets(list[i].name);
		printf("age    =>   ");
		scanf("%i",&list[i].age);

        printf("note 1    =>   ");
		scanf("%i",&list[i].note1); 

        printf("note 2    =>   ");
		scanf("%i",&list[i].note2);

        printf("note  3   =>   ");
		scanf("%i",&list[i].note3);

		printf("date  =>   ");
		scanf("%i",&list[i].date);

		printf("month   =>   ");
		scanf("%i",&list[i].month);

		printf("year   =>   ");
		scanf("%i",&list[i].year);
		
		moy = (float) (list[i].note1 + list[i].note2 + list[i].note3) / 3;
    	list[i].moy = moy;      
	

    	i++;
	}
	
}

void show_list(int n,struct list_student list[n])
{
	float moy;
    printf("=============================================================\n");
	printf("             |   show list info all students   |              \n");
    printf("=============================================================\n\n");
	int i = 0;
	
	
	while (i < n)
    {
        printf("code = %i | name = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f | date of pirth : %i / %i / %i \n\n",
        i + 1,list[i].name,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy,list[i].date,list[i].month,list[i].year);
        i++;
    }
    printf("=============================================================\n");
    
}

void add_student(int n,struct list_student list[n])
{
	float moy;
	printf("=============================================================\n");
	printf("			|   Add new Student  |				              \n");
    printf("=============================================================\n\n");
    
    	int i;
    	i = n;
        printf("code    =>   ");
		scanf("%i",&list[i].code);

		printf("name    =>   ");
		scanf("%s",list[i].name);

		printf("age    =>   ");
		scanf("%i",&list[i].age);

        printf("note 1    =>   ");
		scanf("%i",&list[i].note1); 

        printf("note 2    =>   ");
		scanf("%i",&list[i].note2);

        printf("note  3   =>   ");
		scanf("%i",&list[i].note3);
		
		moy = (float) (list[i].note1 + list[i].note2 + list[i].note3) / 3;
    	list[i].moy = moy;

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
	printf("3 : note1\n");
    printf("4 : note2\n");
    printf("5 : note3\n");
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
		printf("note 1    =>   ");
		scanf("%s",list[index].note1);
		option = -1;
	}
    else if(option == 4)
	{
		printf("note 2   =>   ");
		scanf("%s",list[index].note2);
		option = -1;
	}
    else if(option == 5)
	{
		printf("note 3   =>   ");
		scanf("%s",list[index].note3);
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
	
	var = list[i].note1;
	list[i].note1 = list[i + 1].note1;
	list[i + 1].note1 = var;

    var = list[i].note2;
	list[i].note2 = list[i + 1].note2;
	list[i + 1].note2 = var;

    var = list[i].note3;
	list[i].note3 = list[i + 1].note3;
	list[i + 1].note3 = var;

	var = list[i].date;
	list[i].date = list[i + 1].date;
	list[i + 1].date = var;

	var = list[i].month;
	list[i].month = list[i + 1].month;
	list[i + 1].month = var;

	var = list[i].year;
	list[i].year = list[i + 1].year;
	list[i + 1].year = var;

}


void order_list(int n,struct list_student list[n])
{
	int option,i,j;
	printf("1 : order by name ");
	printf("\n");
	printf("2 : order by age ");
	printf("\n");
	printf("3 : order by note 1 ");
	printf("\n");
	printf("4 : order by note 2 ");
	printf("\n");
	printf("5 : order by note 3 ");
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
						
					if(list[i].note1 > list[i + 1].note1)
					{
						reverce_lists(n,list,i);
					}
				i++;
			}
			j++;
		}
	}
	else if(option == 4)
	{
		j = 0;
		while(j < n)
		{
			i = 0;
			while(i < n - 1)
			{
						
					if(list[i].note2 > list[i + 1].note2)
					{
						reverce_lists(n,list,i);
					}
				i++;
			}
			j++;
		}
	}
	else if(option == 5)
	{
		j = 0;
		while(j < n)
		{
			i = 0;
			while(i < n - 1)
			{
						
					if(list[i].note3 > list[i + 1].note3)
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

	max = list[0].note1;
	index = 0;
	 i = 0;
	while (i < n)
	{
		if (list[i].note1 > max)
		{
			index = i;
		}
		i++;
		
	}
	
	return index;
}


int search_max_moy(int n,struct list_student list[n])
{
	float max;
	int i,index;

	max = list[0].moy;
	index = 0;
	 i = 0;
	while (i < n)
	{
		if (list[i].moy > max)
		{
			index = i;
		}
		i++;
		
	}
	
	return index;
}
void moy_sup_10(int n,struct list_student list[n])
{
	float moy;
	int i,index;

	 i = 0;
	while (i < n)
	{
		if (list[i].moy > 10)
		{
			printf("code = %i | name = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f  \n\n",
        			i + 1,list[i].name,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy);
		}
		i++;
		
	}

}

void orderbyday(int n,struct list_student list[n])
{
	int j;
	int i;
	j = 0;
	while(j < n)
	{
		i = 0;
		while(i < n - 1)
		{
					
				if(list[i].year > list[i + 1].year)
				{
					
					reverce_lists(n,list,i);
				}
				else if(list[i].month > list[i + 1].month)
				{
					reverce_lists(n,list,i);
				}
				else if(list[i].date > list[i + 1].date)
				{
					reverce_lists(n,list,i);
				}
			i++;
		}
		j++;
		}
	
	show_list(n,list);
}
show_list_just_betwen_to_date(int n,struct list_student list[n])
{
	int j;
	int i;

	int minday,minMois,minAnnee;
	int maxday,maxMois,maxAnnee;
	i = 0;

	printf("donner min date");
	scanf("%i",&minday);
	scanf("%i",&minMois);
	scanf("%i",&minAnnee);
	printf("donner max date");
	scanf("%i",&maxday);
	scanf("%i",&maxMois);
	scanf("%i",&maxAnnee);

	while(i < n)
	{
		if(list[i].year > minAnnee && list[i].year < maxAnnee )
		{
			printf("\ncode = %i | name = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f | date of pirth : %i / %i / %i \n\n",
        				i + 1,list[i].name,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy,list[i].date,list[i].month,list[i].year);
		}
		else if(list[i].year == minAnnee)
		{
			
			if(list[i].month > minMois && list[i].month < maxMois )
			{
				printf("\ncode = %i | name = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f | date of pirth : %i / %i / %i \n\n",
        				i + 1,list[i].name,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy,list[i].date,list[i].month,list[i].year);
			}
			else if(list[i].month == minMois)
			{
				printf("yes");
				if(list[i].date >= minday && list[i].date <= maxday )
				{
					printf("\ncode = %i | name = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f | date of pirth : %i / %i / %i \n\n",
        				i + 1,list[i].name,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy,list[i].date,list[i].month,list[i].year);
				}
			}
		}
		i++;
	}
}

void successful(int n,struct list_student list[n])
{
	int i,code;
	i = 0;

	
	show_list(n,list);

	printf("donner code d'etudient");
	scanf("%i",&code);

	if(list[code - 1].moy <= 8)
	{
		printf("ajourne");
		printf("\n");
	}
	else if (list[code - 1].moy >= 10 && list[code - 1].moy < 12)
	{
		printf("Admis");
		printf("\n");
	}
	else if (list[code - 1].moy >= 12 && list[code - 1].moy < 14)
	{
		printf("Admis Bien");
		printf("\n");
	}
	else if (list[code - 1].moy >= 14 && list[code - 1].moy < 16)
	{
		printf("Bien");
		printf("\n");
	}
	else if (list[code - 1].moy >= 16 && list[code - 1].moy < 20)
	{
		printf("T.Bien");
		printf("\n");
	}

	

	
}

void search_student(int n,struct list_student list[n])
{
	int i,r;

	char search[100];

	printf("give name of student you will search");
	scanf("%s",search);
	
	i = 0;

	while (i < n)
	{
		r = strcmp(list[i].name ,search);
		if(r == 0)
		{
			printf("\ncode = %i | name = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f | date of pirth : %i / %i / %i \n\n",
        				i + 1,list[i].name,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy,list[i].date,list[i].month,list[i].year);
		}
		i++;
	}
	
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
   /** 
    list[0].date = 1;
    list[0].month = 1;
    list[0].year = 2000;
    
    list[1].date = 2;
    list[1].month = 1;
    list[1].year = 2000;
    
    list[2].date = 3;
    list[2].month = 2;
    list[2].year = 2000;
    
    list[3].date = 5;
    list[3].month = 3;
    list[3].year = 2000;
    */
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
		
		printf("7 : max moy");
    	printf("\n");
		
		printf("8 : list of student has moy > 10");
    	printf("\n");

		printf("9 : order list of student by birthday");
    	printf("\n");
    	
    	printf("10 : date");
    	printf("\n");
    	
    	printf("11 : student level");
    	printf("\n");

		printf("12 : search of student");
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
			
			printf("max note = %i | name is %s \n",list[max].note1,list[max].name);
			
			printf("=============================================================\n\n");
		}
		else if(option == 7)
		{
			printf("=============================================================\n");
			printf("             		|   show max moy   |		              \n");
    		printf("=============================================================\n\n");
    		
			max = search_max_moy(n,list);
			
			printf("max moy = %.2f | name is %s \n",list[max].moy,list[max].name);
			
			printf("=============================================================\n\n");
		}
		else if(option == 8)
		{
			printf("=============================================================\n");
			printf("           	|   show list of students has moy > 10  |		          \n");
    		printf("=============================================================\n\n");
    		
    		
			moy_sup_10(n,list);
			
			printf("=============================================================\n\n");
		}
		else if(option == 9)
		{
			printf("=============================================================\n");
			printf("           	|   order list by date of pirth  |		          \n");
    		printf("=============================================================\n\n");
			orderbyday(n,list);
		}
		else if(option == 10)
		{
			show_list_just_betwen_to_date(n,list);
		}
		else if(option == 11)
		{
			successful(n,list);
		}
		else if (option == 12)
		{
			search_student(n,list);
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
 

