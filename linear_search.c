// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int arr[5]={1,2,6,8,10};
 int i,num;
 int found=0;
 printf("enter number:");
 scanf("%d",&num);
 
 for(i=0;i<5;i++){
     if(arr[i]==num){
         printf("found !!");
         found=1;
         break;
         
     }
 }
    if(found==1){
        //printf("found..!!");
    }

    else{
        printf("number is not in array ...!!");
     } 
    return 0;
}