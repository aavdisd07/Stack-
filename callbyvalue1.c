#include<stdio.h>
void swap(int x,int y );

void main()
{ int a,b,result;
  printf("Enter the numbers:");
  scanf("%d%d",&a,&b); 
  // printf("%d\n%d\n",x,y);
  printf("Function is calling\n");
   swap(a,b);
   printf("Function called\n");
  printf("%d\n%d",a,b);
}
 void  swap(int x,int y )
 {
    //int x=10,y=30;
    //  x=x+20;
    //  y=y+10;
   int p;
   p=x;
   x=y;
   y=p;
   printf("%d\n%d\n",x,y);
 }