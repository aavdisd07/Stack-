#include<stdio.h>
int prime( int num)
{
  int x;
  for(x=0;x<=num;x++)
  {
     if(num%x==0)
     {
      printf("%d,",x);
    
     }
     num=num/x;
  }
}
void main()
{
   int num; 
   printf(" Enter the number:");
   scanf("%d",&num);
 //  printf("The prime  factors are %d ",prime(num));
   prime(num);
}