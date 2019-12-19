#include <stdio.h>
#include <string.h>

struct list_student
{
    int code;
    char nom[30];
    int age;
    int note1;
    int note2;
    int note3;
	float moy;
    int jour;
    int month;
    int year;
};

int main()
{
	
	int n,i,j,index,max,var,code,option = -1;
	float moy;
	char str[100];
 

    printf("donne nbr les etudient ");
    scanf("%i",&n);

    
    struct list_student list[100];
    


	
   for (i = 0; i < n; i++)
    {
    	
		printf("etudient nbr %i \n",i + 1);
		
        list[i].code = i;

		printf("nom    :   ");
		//scanf("%s",list[i].nom);
		fflush(stdin);
		gets(list[i].nom);
		printf("age    :   ");
		scanf("%i",&list[i].age);

        printf("note 1    :   ");
		scanf("%i",&list[i].note1); 

        printf("note 2    :   ");
		scanf("%i",&list[i].note2);

        printf("note  3   :   ");
		scanf("%i",&list[i].note3);
		
		moy = (float) (list[i].note1 + list[i].note2 + list[i].note3) / 3;
    	list[i].moy = moy;      
	

	}
	
    while (option != 0)
    {
		 
    	    	printf("1 : affichie list");
    	printf("\n");
    	
    	printf("2 : ajoute un etudent");
    	printf("\n");

        printf("3 : supprime un etudent");
    	printf("\n");
    	
    	printf("4 : Modify info Student");
    	printf("\n");

		printf("5 : affichie list order by");
    	printf("\n");

		printf("6 : max note");
    	printf("\n");
		
		printf("7 : max moy");
    	printf("\n");
		
		printf("8 : list etudent moy > 10");
    	printf("\n");

		printf("9 : trie list par a");
    	printf("\n");
    	
    	printf("10 : date naissance");
    	printf("\n");
    	
    	printf("11 :niveau etudent");
    	printf("\n");

		printf("12 : recherche un etudent");
    	printf("\n");
		    	
    	printf("0 : sortie");
    	printf("\n");
    	printf("your choice : ");
    	scanf("%i",&option);
        if(option == 0)
        { 
            break;
        }
        else if(option == 1)
        {
            
			for (i = 0; i < n; i++)
			{
				printf("code = %i | nom = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f  \n\n",i + 1,list[i].nom,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy);

			}
        }
        else if(option == 2)
		{
    		i = n;
        	printf("code    :   ");
			scanf("%i",&list[i].code);
			printf("nom    :   ");
			scanf("%s",list[i].nom);
			printf("age    :   ");
			scanf("%i",&list[i].age);
        	printf("note 1    :   ");
			scanf("%i",&list[i].note1); 
        	printf("note 2    :   ");
			scanf("%i",&list[i].note2);
        	printf("note  3   :   ");
			scanf("%i",&list[i].note3);

			moy = (float) (list[i].note1 + list[i].note2 + list[i].note3) / 3;
    		list[i].moy = moy;
			n++;
		}
		else if(option == 3)
		{
			for (i = 0; i < n; i++)
			{
				printf("code = %i | nom = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f  \n\n",i + 1,list[i].nom,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy);

			}
				i = n;

				printf("index of the student : ");
				scanf("%i",&index);
				index--;
				while(index < n)
				{
					list[index] = list[index + 1];
					index++;
				}
			n--;
		}
		else if(option == 4)
		{
			for (i = 0; i < n; i++)
			{
				printf("code = %i | nom = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f  \n\n",i + 1,list[i].nom,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy);
			}
				option = -1;

				printf("id  : ");
				scanf("%i",&index);
				index--;

				printf("votre option pour modifie");

				printf("1 : nom\n");
				printf("2 : age\n");
				printf("3 : note1\n");
				printf("4 : note2\n");
				printf("5 : note3\n");
				printf("0 : Cancel\n");
				
				printf("votre choise : ");
				scanf("%i",&option);

				if(option == 0)
				{
				}
				else if(option == 1)
				{
					printf("nom    :   ");
					scanf("%s",list[index].nom);
				}
				else if(option == 2)
				{
					printf("age    :   ");
					scanf("%i",list[index].age);
				}
				else if(option == 3)
				{
					printf("note 1    :   ");
					scanf("%s",list[index].note1);
					option = -1;
				}
				else if(option == 4)
				{
					printf("note 2   :   ");
					scanf("%s",list[index].note2);
					option = -1;
				}
				else if(option == 5)
				{
					printf("note 3   :   ");
					scanf("%s",list[index].note3);
					option = -1;
				}
				else
				{
					printf("!!!! votre choice incorect !!!!");
				}
		}
		else if(option == 5)
		{

			for (i = 0; i < n; i++)
			{
				printf("code = %i | nom = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f  \n\n",i + 1,list[i].nom,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy);
			}
			printf("1 : trie par nom ");
			printf("\n");
			printf("2 : trie par age ");
			printf("\n");
			printf("3 : trie par note 1 ");
			printf("\n");
			printf("4 : trie par note 2 ");
			printf("\n");
			printf("5 : trie par note 3 ");
			printf("\n");

			printf("your choice : ");
			scanf("%i",&option);
			
			
			struct list_student order[3];

			if(option == 1)
			{
				j = 0;
				while(j < n)
				{
					i = 0;
					while(i < n - 1)
					{
								
							if(strcmp(list[i].nom,list[i + 1].nom) > 0)
							{
								strcpy(str,list[i].nom);
								strcpy(list[i].nom,list[i + 1].nom);
								strcpy(list[i + 1].nom,str);
								
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
								
								

								strcpy(str,list[i].nom);
								strcpy(list[i].nom,list[i + 1].nom);
								strcpy(list[i + 1].nom,str);
	
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
								

								strcpy(str,list[i].nom);
								strcpy(list[i].nom,list[i + 1].nom);
								strcpy(list[i + 1].nom,str);
								
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
								
								

								strcpy(str,list[i].nom);
								strcpy(list[i].nom,list[i + 1].nom);
								strcpy(list[i + 1].nom,str);
								
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
								

								strcpy(str,list[i].nom);
								strcpy(list[i].nom,list[i + 1].nom);
								strcpy(list[i + 1].nom,str);
								
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
							}
						i++;
					}
					j++;
				}
			}
		}
		else if (option == 6)
		{
    		

				max = list[0].note1;
				index = 0;
				for (i = 0; i < n; i++)
				{
					if (list[i].note1 > max)
					{
						index = i;
					}
										
				}
			printf("max note = %i | nom est %s \n",list[index].note1,list[index].nom);
		}
		else if(option == 7)
		{

			max = list[0].moy;
			index = 0;
			for (i = 0; i < n; i++)
			{
				if (list[i].moy > max)
				{
					index = i;
				}
			}
			
			printf("max moy = %.2f | nom is %s \n",list[index].moy,list[index].nom);
			
		}
		else if(option == 8)
		{
    		
			for (i = 0; i < n; i++)
			{
				if (list[i].moy > 10)
				{
					printf("code = %i | nom = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f  \n\n",
							i + 1,list[i].nom,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy);
				}
			}
			
		}
		else if(option == 9)
		{
			j = 0;
			while(j < n)
			{
				i = 0;
				while(i < n - 1)
				{
							
						if(list[i].year > list[i + 1].year)
						{

								strcpy(str,list[i].nom);
								strcpy(list[i].nom,list[i + 1].nom);
								strcpy(list[i + 1].nom,str);
								
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

								var = list[i].jour;
								list[i].jour = list[i + 1].jour;
								list[i + 1].jour = var;

								var = list[i].month;
								list[i].month = list[i + 1].month;
								list[i + 1].month = var;

								var = list[i].year;
								list[i].year = list[i + 1].year;
								list[i + 1].year = var;
						}
						else if(list[i].month > list[i + 1].month)
						{
								strcpy(str,list[i].nom);
								strcpy(list[i].nom,list[i + 1].nom);
								strcpy(list[i + 1].nom,str);
								
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

								var = list[i].jour;
								list[i].jour = list[i + 1].jour;
								list[i + 1].jour = var;

								var = list[i].month;
								list[i].month = list[i + 1].month;
								list[i + 1].month = var;

								var = list[i].year;
								list[i].year = list[i + 1].year;
								list[i + 1].year = var;
						}
						else if(list[i].jour > list[i + 1].jour)
						{
								strcpy(str,list[i].nom);
								strcpy(list[i].nom,list[i + 1].nom);
								strcpy(list[i + 1].nom,str);
								
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

								var = list[i].jour;
								list[i].jour = list[i + 1].jour;
								list[i + 1].jour = var;

								var = list[i].month;
								list[i].month = list[i + 1].month;
								list[i + 1].month = var;

								var = list[i].year;
								list[i].year = list[i + 1].year;
								list[i + 1].year = var;
						}
					i++;
				}
				j++;
			}
		}
		else if(option == 10)
		{
			int minday,minMois,minAnnee;
			int maxday,maxMois,maxAnnee;
			i = 0;

			printf("donner min jour");
			scanf("%i",&minday);
			scanf("%i",&minMois);
			scanf("%i",&minAnnee);
			printf("donner max jour");
			scanf("%i",&maxday);
			scanf("%i",&maxMois);
			scanf("%i",&maxAnnee);

			while(i < n)
			{
				if(list[i].year > minAnnee && list[i].year < maxAnnee )
				{
					printf("\ncode = %i | nom = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f | jour of pirth : %i / %i / %i \n\n",
								i + 1,list[i].nom,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy,list[i].jour,list[i].month,list[i].year);
				}
				else if(list[i].year == minAnnee)
				{
					
					if(list[i].month > minMois && list[i].month < maxMois )
					{
						printf("\ncode = %i | nom = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f | jour of pirth : %i / %i / %i \n\n",
								i + 1,list[i].nom,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy,list[i].jour,list[i].month,list[i].year);
					}
					else if(list[i].month == minMois)
					{
						printf("yes");
						if(list[i].jour >= minday && list[i].jour <= maxday )
						{
							printf("\ncode = %i | nom = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f | jour of pirth : %i / %i / %i \n\n",
								i + 1,list[i].nom,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy,list[i].jour,list[i].month,list[i].year);
						}
					}
				}
				i++;
			}
		}
		else if(option == 11)
		{
			i = 0;

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
		else if (option == 12)
		{
			int r;

			char search[100];

			printf("give nom of student you will search");
			scanf("%s",search);
			
			i = 0;

			while (i < n)
			{
				r = strcmp(list[i].nom ,search);
				if(r == 0)
				{
					printf("\ncode = %i | nom = %s  | age =  %i   |  note1 = %i |  note2 = %i |  note3 = %i | moyen = %.2f | jour of pirth : %i / %i / %i \n\n",
								i + 1,list[i].nom,list[i].age,list[i].note1,list[i].note2,list[i].note3,list[i].moy,list[i].jour,list[i].month,list[i].year);
				}
				i++;
			}
		}
		else
		{
    		printf("\n");
			printf("!!!! votre choice incorrect !!!!");
			printf("\n");
		}
    }
    
    
  

    
    
    return 0;
}
 
