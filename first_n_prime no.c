int main(){
    int startpoint=2,upperlimit;
    printf("enter number :");
    scanf("%d",&upperlimit);
    while(startpoint<=upperlimit){
        int count=0;
        int divisor=2;
        while (divisor < startpoint)
        {
            if (startpoint % divisor == 0)
            {
                count ++;
            }
            divisor ++;

            
        }
        if (count == 0)
        {
            printf("%d\n",startpoint);
        }
        
        
        startpoint ++;
    }
   return 0;
} 