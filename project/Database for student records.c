//  Basic Students Record  Management System in C
//         Using Array Data Structure

#include <stdio.h>

struct Students
{
    int  id;
    char name[50];
    char gender[6];
    int  age;
    char class[10];
    char address[100];
};

int user_choice();

void MainMenu();

int main()
{

    struct Students students[1000];
    int count=0;
    int choice;
    while(1)
    {
        MainMenu();
        choice = user_choice();
        if(choice==0)
        {
            printf("\n Thanks For Using Our Program");
            break;
        }
        else if(choice==1)
        {
            printf("\n\n||||  *  Student Insertion Menu    * ||||\n");
            do
            {
                printf("Enter Student ID :");
                scanf("%d", &students[count].id);
                int ctr=0;
                for(int check=0; check < count; check++)
                {
                    if(students[count].id==students[check].id)
                    {
                        ctr=2;
                        break;
                    }
                }
                if(ctr==0)
                {
                    break;
                }
                else
                {

                    printf("ID Already Exists ! Please Enter Different ID ! \n");
                }

            }
            while(1);
            printf("Enter Student Name :");
            scanf("%s",students[count].name);
            printf("Enter Student Gender :");
            scanf("%s",students[count].gender);
            printf("Enter Student Age :");
            scanf("%d",&students[count].age);
            printf("Enter Student Class :");
            scanf("%s",students[count].class);
            printf("Enter Student Address :");
            scanf("%s",students[count].address);

            printf("\nStudent Info Added Successfully! ");
            printf("\nID          = %d",students[count].id);
            printf("\nName        = %s",students[count].name);
            printf("\nGender      = %s",students[count].gender);
            printf("\nAge         = %d",students[count].age);
            printf("\nClass       = %s",students[count].class);
            printf("\nAddress     = %s",students[count].address);

            count++;
        }

        else if(choice==2)
        {
            int s_id;
            printf("\n\n||||||| ***  Welcome Search Menu ***** |||||||");
            printf("\nEnter Student Id For Search : ");
            scanf("%d",&s_id);

            int s=-1;
            for(int i=0; i<count; i++)
            {
                if(s_id==students[i].id)
                {

                    s=i;

                    break;
                }

            }

            if(s==-1)
            {
                printf("\n\n No Record Found !");

            }
            else
            {

                printf("\n    Student Info  ");
                printf("\nID          = %d",students[s].id);
                printf("\nName        = %s",students[s].name);
                printf("\nGender      = %s",students[s].gender);
                printf("\nAge         = %d",students[s].age);
                printf("\nClass       = %s",students[s].class);
                printf("\nAddress     = %s",students[s].address);


            }

        }

        else if(choice==3)
        {
            printf("\n\n All Students List \n");
            for(int i=0; i<count; i++)
            {
                printf("\n    Student %d ",(i+1));
                printf("\nID          = %d",students[i].id);
                printf("\nName        = %s",students[i].name);
                printf("\nGender      = %s",students[i].gender);
                printf("\nAge         = %d",students[i].age);
                printf("\nClass       = %s",students[i].class);
                printf("\nAddress     = %s",students[i].address);

            }

        }


        else if(choice==4)
        {
            int s_id;
            printf("\n\n||||||| ***  Welcome Update Menu ***** |||||||");
            printf("\nEnter Student Id For Update : ");
            scanf("%d", &s_id);

            int s = -1;
            for ( int i = 0; i < count; i++)
            {
                if (s_id == students[i].id)
                {

                    s = i;

                    break;
                }

            }

            if (s == -1)
            {
                printf("\n\n No Record Found !");

            }
            else
            {

                printf("Enter Student Name :");
                scanf("%s",students[s].name);
                printf("Enter Student Gender :");
                scanf("%s",students[s].gender);
                printf("Enter Student Age :");
                scanf("%d",&students[s].age);
                printf("Enter Student Class :");
                scanf("%s",students[s].class);
                printf("Enter Student Address :");
                scanf("%s",students[s].address);




                printf("\n    Student Info  ");
                printf("\nID          = %d", students[s].id);
                printf("\nName        = %s", students[s].name);
                printf("\nGender      = %s", students[s].gender);
                printf("\nAge         = %d", students[s].age);
                printf("\nClass       = %s", students[s].class);
                printf("\nAddress     = %s", students[s].address);


            }

        }

        else if(choice==5)
        {
            int s_id;
            printf("\n\n||||||| ***  Welcome Delete Menu ***** |||||||");
            printf("\nEnter Student Id For Delete : ");
            scanf("%d", &s_id);

            int s = -1;
            for (int i = 0; i < count; i++)
            {
                if (s_id == students[i].id)
                {

                    s = i;

                    break;
                }

            }

            if (s == -1)
            {
                printf("\n\n No Record Found !");

            }
            else
            {

                if(s==count)
                {
                    count--;
                }
                else if(count>0)
                {
                    students[s]=students[count-1];
                    count--;

                }


                printf("\n    Student Deleted Successfully !  ");



            }



        }



    }

}

void MainMenu()
{
    printf("\n\n|||   *****     Welcome To Student's Records  ****    |||");
    printf("\nEnter 1 For Add New Student");
    printf("\nEnter 2 For Search Student");
    printf("\nEnter 3 For Display  all Students");
    printf("\nEnter 4 For Update Student");
    printf("\nEnter 5 For Delete Student ");
    printf("\nEnter 0 to Exit ! ");
    printf("\nEnter Choice Here : ");
}

int user_choice()
{

    int choice;

    do
    {

        scanf("%d", &choice);
        if(choice>=0 && choice<=5)
        {
            break;
        }
        else
        {
            printf("\nPlease Enter Valid Choice \n");

        }

    }
    while(1);

    return  choice;
}
