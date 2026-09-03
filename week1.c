//first repeating char in string
#include<stdio.h>
int main(){
    char s[100];
    printf("enter a string:");
    scanf("%[^\n]",s);
for(int i=0;s[i]!='\0';i++){
    int count=0;
    for(int j=i;s[j]!='\0';j++){
        if(s[i]==s[j]){
            count++;
            if(count==2){
                printf("%c",s[i]);
                return 0;
            }
        }
    }
}
}