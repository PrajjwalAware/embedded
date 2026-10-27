/*Problem 1: Count the number of windows whose sum is greater than k.

Given an array and a window size w, count how many contiguous subarrays of size w have a sum greater than a given value k.

Input:

6 3 7
2 1 5 1 3 2

Output : 2
*/

#include<stdio.h>
int main(){
    int k;
    int n,w;
    printf("Enter n,k,w:");
    scanf("%d %d %d",&n,&k,&w);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    int l=0,r=w-1;
    int sum=0,count=0;

    int i=0;
    while(i<w){
        sum=sum+arr[i];
        i++;
    }
    l=1;
    r=w;
    if(sum>k){
        count++;
    }
    while(r<n){
        sum=sum-arr[l-1]+arr[r];
        r++;
        l++;
        if(sum>k){
            count++;
        }
    }

    printf("Ther are total %d no of subarray with sum greater than %d",count,k);

}