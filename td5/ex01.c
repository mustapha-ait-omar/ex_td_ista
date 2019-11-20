#include <stdio.h>

#include <string.h>


struct student
{
    char first_name[100];
    char last_name[100];
    int note1;
    int note2;
    int note3;
};


int main()
{

    float moy;
    struct student s;

    printf("first name of student : ");
    gets(s.first_name);

    printf("last name of student : ");
    gets(s.last_name);

    
        printf("note 1 : ");
        scanf("%i",&s.note1);

        printf("note 2 : ");
        scanf("%i",&s.note2);

        printf("note 3 : ");
        scanf("%i",&s.note3);

        moy = (float) (s.note1 + s.note2 + s.note3)/3;
        

        printf("rate of %s %s is %.2f",s.first_name,s.last_name,moy);



    
    return 0;
}
