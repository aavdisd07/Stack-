#include<stdio.h>
 void Table(int x, int y);

void main()
{
   int p,q;
    printf(" Enter the values of P and Q:\n");
    scanf("%d%d",&p,&q);
   printf("Function is calling\n");
    Table(p,q);

      printf("\nFunction ended\n");
 for(int i=1;i<11;i++)
    {
      printf("%d\n",i*p);
    }    
    printf("\n\n");
 for(int i=1;i<11;i++)
   {
     printf("%d\n",i*q);
   }
 printf("Function is calling\n");
    Table(p,q);

      printf("\nFunction ended\n");
}
 void  Table (int x,int y)
 {
   for (int i=10;i>0;i--)
   {
     printf(" %d",i*x);
   }
   printf("\n");
   for (int i=10;i>0;i--)
   {
     printf("%d ",i*y);
   }

 }