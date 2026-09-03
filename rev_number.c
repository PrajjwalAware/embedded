#include<stdio.h>
int main(){
    int num,rem;
    int rev=0;
    printf("enter num :");
    scanf("%d",&num);
    while(num>0){
        rem=num % 10;
        rev= rev*10 + rem;
        num = num/10;
    }
    printf("reverse number = %d",rev);
}