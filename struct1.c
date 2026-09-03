#include<stdio.h>
struct shop {
    char item[16];
    float cost_per_item;
    float quant;
    float item_cost;
    
    
};
int main(){
    struct shop arr[10];
    int index=0;
    float bill_amt=0;
    int i=1; 
    while(i){

        printf("Enter item name :");
        scanf("%[^\n]",arr[index].item);
        getchar();

        printf("Enter item cost :");
        scanf("%f",&arr[index].cost_per_item);
        getchar();

        printf("Enter item Quantity :");
        scanf("%f",&arr[index].quant);

        arr[index].item_cost=arr[index].cost_per_item * arr[index].quant;
        bill_amt=bill_amt + arr[index].item_cost;
        index++;
        printf("Do you want to continue(1/yes,0/no)");
        scanf("%d",&i);
        getchar();


    }
    printf("\n\n\n\t\t\t:$:$:WELCOME TO DMART:&:&:\n\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
    printf("Sr.no\t\titem name\t\tquantity\t\tcost\t\ttotal cost\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
    for(int i=0;i<index;i++){

        printf("%d\t\t%s\t\t\t%.2f\t\t\t%.2f\t\t%.2f\n",i+1,arr[i].item,arr[i].quant,arr[i].cost_per_item,arr[i].item_cost);

    }
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tTotal bill :------------------------>>>> %.2f\n",bill_amt);
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");

}