#include<stdio.h>
#include<string.h>
int main(){
    
    char name[100];
    printf("Enter your name :");
    scanf("%s",name);

    int length=strlen(name);
    int start=0;
    int end=length-1;
    int temp;
    while(start<end){

    
            temp=name[start];
            name[start]=name[end];
            name[end]=temp;

            start++;
            end--;
        }

    printf("After reversing :\n");    
    printf("%s",name);
        

    }

   
