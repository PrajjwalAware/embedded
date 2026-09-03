#include<stdio.h>
int main(){
    int i,j,n,m;
    int temp;
    float median1,median,median2;
    temp=0;
    printf("Enter 'n' value of Array A:");
    scanf("%d",&n);
    printf("Enter 'n' value of Array B:");
    scanf("%d",&m);
    int arr[n];
    int brr[m];
    printf("Enter elements of array A:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter elements of array B:");
    for(i=0;i<m;i++){
        scanf("%d",&brr[i]);
    }
    
    for (i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
        
    }
    for(i=0;i<m-1;i++){
        for(j=0;j<m-i-1;j++){
            if(brr[j]>brr[j+1]){
            temp=brr[j];
            brr[j]=brr[j+1];
            brr[j+1]=temp;
                
            }
        }
    }
    //median part
    if(m%2==0 ){
        
        median1=(brr[m/2-1]+brr[m/2])/2.0;
    }
    else{
       
        median1=brr[m/2];
        
    }
    if(n%2==0){
        median=(arr[n/2-1]+arr[n/2])/2.0;
            
    }
    else{
        median=arr[n/2];
    }
    
    median2=(median+median1)/2;
    
        printf("Median of array1 : %g\n",median);
        printf("Median of array2 : %g\n",median1);
        printf("Median of both arrays : %g\n",median2);
}