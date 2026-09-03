#include<stdio.h>
struct employee{
    char name[30];
    char add[60];
    char mob[40];
    char email[30];
    float sal;
};
void display(struct employee* sptr){

printf("name:%s\n",sptr->name);
printf("address:%s\n",sptr->add);
printf("mobile no.%s\n",sptr->mob);
printf("email%s\n",sptr->email);
printf("salary%f\n",sptr->sal);



}

int main(){
    struct employee s;

    printf("Enter your name:");
    scanf("%[^\n]:",s.name);
    getchar();
    printf("Enter address:");
    scanf("%[^\n]:",s.add);
    getchar();
    printf("Enter mobile no.:");
    scanf("%[^\n]:",s.mob);
    getchar();
    
    printf("Enter email:");
    scanf("%[^\n]:",s.email);
    getchar();

    printf("Enter your salary:");
    scanf("%f:",&s.sal);
    display(&s);

}