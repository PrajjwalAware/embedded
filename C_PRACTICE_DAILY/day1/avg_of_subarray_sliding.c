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

    float max_avg=0;
    int l=0,i=0,r=k-1,sum=0;
    float avg=0;
    while(i<k){
        sum=sum+arr[i];
        i++;
    }
    avg=(float)sum/k;
    max_avg=avg;
    l=1;
    r=k;
    while(r<n){
        sum=sum-arr[l-1]+arr[r];
        avg=(float)sum/k;
        if(avg>max_avg){
            max_avg=avg;
        }
        l++;
        r++;
    }
    printf("Maximum Avg.: %0.2f",max_avg);
}