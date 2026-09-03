#include<stdio.h>
#include<string.h>
int main(){

    char arr[100];
    scanf("%[^\n]",arr);
    int largest=0;
    int count=0;
    int index=0;
    int i=0;
    
        for(int i=0;arr[i]!='\0';i++){

            if(arr[i]!=' '){

                count++;
                    

            }
            else{
                if(count>largest){

                    largest=count;
                    index=i-count;
                }
            count=0;
            
            
            }


        }
            if(count > largest){
            largest = count;
            index=i-count;
            }
        printf("largest word has size %d",largest);
        printf("\n");
        for(int i=index;arr[i]!=' ';i++){

            printf("%c",arr[i]);
        }

}