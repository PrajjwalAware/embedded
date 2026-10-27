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

    int max_sum=0,sum=0;
    int l=0,r=k-1;
    
   /*while(r<n){
        if(l==0){
            while(l<k){
                sum=sum+arr[l];
                l++;
            }
            l=0;
            max_sum=sum;
        }
        else{
            sum=sum-arr[l-1]+arr[r];
        }
        if(sum>max_sum){
            max_sum=sum;
        }
        l++;
        r++;
        
    }
    int sum=0,max_sum=0;
    int l=0,r=k-1;
    */
   int i=0;
    while(i<k){
        sum=sum+arr[i];
        i++;
    }
    max_sum=sum;
    l=1;
    r=k;
    while(r<n){
    
        sum=sum-arr[l-1]+arr[r];
    
        if(sum>max_sum){
            max_sum=sum;
        }
        l++;
        r++;
    }
    printf("max sum=%d",max_sum);

}