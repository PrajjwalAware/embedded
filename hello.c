#include<stdio.h>
int main(){
    char operator;
    int a,b ,res;
    printf("enter operator :");
    scanf("%c",&operator);
    printf("enter 2 numbers :");
    scanf("%d %d",&a,&b);


    if (operator == '+')
    {
       res = a + b; 
       printf("%d %c %d = %d",a,operator,b,res);

    }
    else if (operator == '-')
    {
        res = a - b;
        printf("%d %c %d = %d",a,operator,b,res);
    }
    else if (operator == '*')
    {
       res= a * b ;
       printf("%d %c %d = %d",a,operator,b,res);

    }
    else if (operator == '/')
    {
       res = a/b;
       printf("%d %c %d = %d",a,operator,b,res);

    }
    else if (operator = '%')
    {
       res = a % b;
       printf("%d %c %d = %d",a,operator,b,res);
    }
    else
       printf("Invalid input");}  