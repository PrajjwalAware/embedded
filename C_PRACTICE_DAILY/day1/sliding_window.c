#include<stdio.h>
int main(){
    int k;
    int n;
    printf("Enter n,k:");
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l,r;
    l=0;
    r=0;
    int sum=0;
    int len=0;
    int maxlen=0;
    while(r<n){
        sum=sum+arr[r];
        
        if(sum>=k){
            
                sum=sum-arr[l];
                l++;
                

        }
        len=r-l+1;
        if(len>maxlen){
            maxlen=len;
        }
        r++;
    }

    
    printf("the maximum lenght of subarray with sum less than k is: %d",maxlen);
}