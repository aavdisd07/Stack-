#include<stdio.h>
void sum( int a, int b);
void mul(int a, int b);
int main (){
  printf(" Enter the 2 values\n");
   int a,b,s,m;

  scanf("%d%d",&a,&b);

     int s=sum(a,b);
     int  m=mul(a,b);

  printf("the sum is%d and mul is %d",s,m);
   return 0;

}
   void sum(int x, int y){
   return x+y;

}
  void mul(int x, int y){

  return x*y;

}