#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[20];
    char add[60];
    char mob[20];
};

void Add_Student_Info(struct Student arr[], int *size)
{
    int id_flag = 0;

    // ---------------- ID VALIDATION ----------------

    do
    {
        id_flag = 0;

        printf("\tEnter the Student Id: ");

        int id;
        scanf("%d", &id);

        for(int i = 0; i < *size; i++)
        {
            if(id == arr[i].id)
            {
                id_flag = 1;
                break;
            }
        }

        if(id_flag == 1)
        {
            printf("\tThis ID is already assigned. Please re-enter the ID.\n");
        }
        else
        {
            arr[*size].id = id;
        }

    } while(id_flag);


    // ---------------- NAME ----------------

    getchar();

    printf("\tEnter the Name: ");
    scanf("%19[^\n]", arr[*size].name);


    // ---------------- ADDRESS ----------------

    getchar();

    printf("\tEnter the Address: ");
    scanf("%59[^\n]", arr[*size].add);


    // ---------------- MOBILE NUMBER VALIDATION ----------------

    int mob_flag;

    do
    {
        mob_flag = 0;

        getchar();

        printf("\tEnter the Mobile Number: ");
        scanf("%19[^\n]", arr[*size].mob);

                                                                                // Check exactly 10 characters
        if(strlen(arr[*size].mob) != 10)
        {
            printf("\tMobile number must contain exactly 10 digits.\n");
            mob_flag = 1;
            continue;
        }

                                                                                 // Check whether every character is a digit
        for(int i = 0; i < 10; i++)
        {
            if(arr[*size].mob[i] < '0' ||
               arr[*size].mob[i] > '9')
            {
                mob_flag = 1;

                printf("\tMobile number must contain only digits.\n");

                break;
            }
        }

                                                                                        // Check duplicate mobile number
        if(mob_flag == 0)
        {
            for(int i = 0; i < *size; i++)
            {
                if(strcmp(arr[i].mob, arr[*size].mob) == 0)
                {
                    mob_flag = 1;

                    printf("\tThis mobile number is already assigned. Enter another number.\n");

                    break;
                }
            }
        }

    } while(mob_flag);


    // Student successfully added
    (*size)++;
}


void Display_Student_Info(struct Student arr[], int s)
{
    if(s == 0)
    {
        printf("\t\tNo Student Record::\n");
        return;
    }

    for(int i = 0; i < s; i++)
    {
        printf("-------------------------------------------------------------\n");

        printf("ID      : %d\n", arr[i].id);
        printf("Name    : %s\n", arr[i].name);
        printf("Address : %s\n", arr[i].add);
        printf("Mobile  : %s\n", arr[i].mob);
    }

    printf("-------------------------------------------------------------\n");
}


void Search_Student(struct Student arr[], int s)
{
    int id;

    printf("Enter Your Id: ");
    scanf("%d", &id);

    int flag = 0;
    int i;

    for(i = 0; i < s; i++)
    {
        if(id == arr[i].id)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("\tStudent Data Found\n");

        printf("ID      : %d\n", arr[i].id);
        printf("Name    : %s\n", arr[i].name);
        printf("Address : %s\n", arr[i].add);
        printf("Mobile  : %s\n", arr[i].mob);
    }
    else
    {
        printf("\tStudent Data Not Found\n");
    }
}


int main()
{
    struct Student arr[30];

    int size = 0;
    int i = 1;

    while(i)
    {
        printf("\n");
        printf("\t1. Add Student Info\n");
        printf("\t2. Search Student Info\n");
        printf("\t3. Display All Student Info\n");
        printf("\t4. Exit\n");

        int opt;

        printf("\tPlease Select One Option from the above menu: ");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:
                Add_Student_Info(arr, &size);
                break;

            case 2:
                Search_Student(arr, size);
                break;

            case 3:
                Display_Student_Info(arr, size);
                break;
            
             case 4:
                    update_info(arr,&size);
                    break;

            case 5:
                printf("\t\t\t::Thank You::\n");
                return 0;

            default:
                printf("\t\t\t::Invalid Option::\n");
        }

        printf("\nDo You Want to Continue (1-Yes / 0-No): ");
        scanf("%d", &i);
    }

    return 0;
}