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

    int l,r,sum,min_sum;
    l=0;
    r=k-1;
    sum=0;
    min_sum=0;
    int i=0;
    while(i<k){
        sum=sum+arr[i];
        i++;
    }
    min_sum=sum;
    l=1;
    r=k;
    while(r<n){
        sum=sum-arr[l-1] + arr[r];
        if(sum<min_sum){
            min_sum=sum;
        }
        l++;
        r++;
    }
    printf("Minimum sum : %d",min_sum);
    
}