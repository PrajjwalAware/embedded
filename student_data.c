#include<stdio.h>
#include<string.h>

struct Student
{
    int id;
    char name[20];
    char add[60];
    char mob[20];
    char email[40];
};
void sort_info(struct Student arr[],int size){

    struct Student temp;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j].id > arr[j + 1].id)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Student data sorted successfully....!!\n");


}
void delete_info(struct Student arr[],int *size){
    int id;
    int flag=0;
    int new_size=0;
    int i;
    printf("please enter id for which you want to update info:");
    scanf("%d",&id);
    for(i=0;i<*size;i++){

        if(id!=arr[i].id){
            arr[new_size]=arr[i];
            new_size++;

        }
    } 
    
    
    if(new_size==*size){
        printf("\tstudent not found\n");
    }
    else{
        printf("\t student deleted successfully\n");
        *size=new_size;
}



}
void update_info(struct Student arr[],int *size){
    int id;
    int flag=0;
    int i;
    printf("please enter id for which you want to update info:");
    scanf("%d",&id);

    for(i = 0; i < *size; i++)
    {
        if(id == arr[i].id)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Student data not found......!!\n");
        return ;
    }

    printf("\nStudent data found\n");
    printf("1. Update Name\n");
    printf("2. Update Address\n");
    printf("3. Update Mobile Number\n");
    printf("4. Update Email ID\n");
    
    
    int opt;
    printf("Enter your choice: ");
    scanf("%d", &opt);
    switch(opt)
{
    case 1:
        printf("Enter new name: ");
        scanf(" %19[^\n]", arr[i].name);
        break;

    case 2:
        printf("Enter new address: ");
        scanf(" %59[^\n]", arr[i].add);
        break;

    case 3:
    {
    int flag_mo;

    do
    {
        flag_mo = 0;

        printf("Enter new mobile number: ");
        scanf(" %[^\n]", arr[i].mob);

        if(strlen(arr[i].mob) != 10)
        {
            printf("The mobile number is invalid..!!\n");
            flag_mo = 1;
            continue;
        }

        for(int j = 0; j < 10; j++)
        {
            if(arr[i].mob[j] < '0' || arr[i].mob[j] > '9')
            {
                printf("Mobile number should contain numbers only..!!\n");
                flag_mo = 1;
                break;
            }
        }

    }while(flag_mo);

    break;
}
    case 4:{
        int g_flag;
    do
    {
        g_flag=0;
       printf("Enter email:");
       scanf(" %[^\n]",arr[*size].email);
       for(int i = 0; i < *size; i++)
        {
            if(strcmp(arr[*size].email, arr[i].email) == 0){
                printf("This email is already registered...!!\n");
                g_flag = 1;
                break;
    }
}
       if(strstr(arr[*size].email,".com")==NULL || strstr(arr[*size].email,"@")==NULL){

                printf("enter valid email...!!\n");
                g_flag=1;

       }

       
    } while (g_flag);
}

    default:
        printf("Enter valid option.....!!!!\n");
}


}
void search(struct Student arr[],int size){

    int id;
    printf("Enter id:");
    scanf("%d",&id);
    int flag=0;
    int i;
    for(i=0;i<size;i++){
        if(id==arr[i].id){
            flag=1;
            break;
        }
    
}
if(flag==1){
printf("---------------------------------------------------------------------------------------------------------\n");
    printf("\t::student data found::\n");
printf("---------------------------------------------------------------------------------------------------------\n");

    printf("ID        :%d\n",arr[i].id);
    printf("Name      :%s\n",arr[i].name);
    printf("Address   :%s\n",arr[i].add);
    printf("Mobile no.:%s\n",arr[i].mob);
    printf("Email ID  :%s\n",arr[i].email);

}
else{
    printf("Studenty data not found......!!\n");
}
printf("---------------------------------------------------------------------------------------------------------\n");
 

}
void display(struct Student arr[],int size){
    if(size==0){

        printf("no record found>>!!\n");
        return;
    }
    
    for(int i=0;i<size;i++){
        printf("---------------------------------------------------------------------------------------------------------\n");
 

    printf("\t%d\t%s\t%s\t%s\t%s\n",arr[i].id,arr[i].name,arr[i].add,arr[i].mob,arr[i].email);
}
printf("---------------------------------------------------------------------------------------------------------\n");
 

}
void add_student(struct Student  arr[] , int *size){

    int flag_id;
    do{
        flag_id=0;
        printf("Enter ID:");
        int id;
        scanf("%d",&id);
        
        for(int i=0;i<(*size);i++){
            if(id==arr[i].id){
                flag_id=1;
                break;
            }
        }
        if(flag_id==1){
            printf("this id is already assign choose again\n");
            
        }
        else{
            arr[*size].id=id;
        }
        
    }while(flag_id);
    getchar();
    printf("Enter Name:");
    scanf(" %[^\n]",arr[*size].name);
    getchar();
    printf("Enter Address:");
    scanf(" %[^\n]",arr[*size].add);
    getchar();
    int flag_mo;
    do{
        flag_mo=0;
        printf("Enter mobile number:");
        scanf(" %[^\n]",arr[*size].mob);
        getchar();
        if(strlen(arr[*size].mob)!=10){

            printf("The mobile number is invalid ..!!\n");
            flag_mo=1;
            continue;

        }
        for(int i=0;i<10;i++){
            if(arr[*size].mob[i]<'0'|| arr[*size].mob[i]>'9'){
                printf("mobile number should contain numbers only...!!\n");
                flag_mo=1;
                break;
            }   
        }
    }while((flag_mo));
    int g_flag;
    do
    {
        g_flag=0;
       printf("Enter email:");
       scanf(" %[^\n]",arr[*size].email);
       for(int i = 0; i < *size; i++)
{
        if(strcmp(arr[*size].email, arr[i].email) == 0){
            printf("This email is already registered...!!\n");
            g_flag = 1;
            break;
    }
}
       if(strstr(arr[*size].email,".com")==NULL || strstr(arr[*size].email,"@")==NULL){

                printf("enter valid email...!!\n");
                g_flag=1;

       }

       
    } while (g_flag);
    
   
   (*size)++;
}

int main(){

    struct Student arr[30];
    int i=1;
    int size=0;
    while(i){
        printf("\n");
        printf("---------------------------------------------------------------------------------------------------------\n");
 
        printf("\t\t\t:::WELCOME TO STUDENT DATABASE SYSTEM:::\n");

        printf("---------------------------------------------------------------------------------------------------------\n");
 
        printf("\t1.Add student data\n");
        printf("\t2.Search student info\n");
        printf("\t3.Display students info\n");
        printf("\t4.update student info\n");
        printf("\t5.delete student info\n");
        printf("\t6.sort student info\n");
        printf("\t7.Exit\n");
        int opt;
        printf("please select one option:");
        scanf("%d",&opt);

         printf("---------------------------------------------------------------------------------------------------------\n");
 


        switch(opt){

            case 1: add_student(arr,&size);
                    break;
            case 2: search(arr,size);
                    break;
            case 3: display(arr,size);
                    break;
            case 4:update_info(arr,&size);
                    break;
            case 5:delete_info(arr,&size);
                    break;  
            case 6:sort_info(arr,size);
                    break;     
            case 7: printf("\t\t\t:::Thankyou....!!\n");
                    break;
            default: printf("Enter valid option.....!!!!\n");
        }

    }

}