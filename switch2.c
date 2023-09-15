#include<stdio.h>
void main()
{
 int x,y;
 char op;
 printf("Enter the two numbers:\n");
 scanf("%d%d",&x,&y);
 printf("Enter the + or -\n");
 scanf("\n%c",&op);
if(op =='+')
  {
     printf("%d",x+y);
  }
 else if(op =='-')
  {
    printf("%d",x-y);
  }
else 
 {
  printf("Enter valid operator");
 }














}