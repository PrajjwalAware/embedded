#include <stdio.h>
struct record
{
    char name[100];
    int p;
    int c;
    int m;
    
    
    
     
};
int main ()
{
   
    int size;
    printf("Enter the number of students:");
    scanf("%d",&size);
    
    
     struct record arr[size];
     
     for(int i=0;i<size;i++)
     {
         printf("Enter name of student: ");
         scanf(" %[^\n]",arr[i].name);
         
         printf("Enter P,C and M marks : ");
         scanf("%d %d %d",&arr[i].p,&arr[i].c,&arr[i].m);
     }
     int ptotal=0;
     int ctotal=0;
     int mtotal=0;
      for(int i=0;i<size;i++)
      {
        ptotal=ptotal+arr[i].p;
        ctotal=ctotal+arr[i].c;
        mtotal=mtotal+arr[i].m;
      }
        float pavg=0;
           float cavg=0;
            float  mavg=0;
            
            pavg=(float)ptotal/size;
             cavg=(float)ctotal/size;
              mavg=(float)mtotal/size;
           
            printf("------------------------------\n");
            printf("\nMaths   Physics   Chemistry\n ");
            printf("-----------------------------");
            for(int i=0;i<size;i++)
                
            {
            printf("%s %d %d %d \n",arr[i].name,arr[i].m,arr[i].p,arr[i].c);
            }
             printf("\n-------------------------------\n");
            
             printf("average  %.2f    %.2f    %.2f   ",mavg,pavg,cavg);
             
              printf("\t\t\t------------------------------\t\t\t");

   
     
    
}