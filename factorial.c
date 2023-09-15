#include<stdio.h>
void main(){
int n,a=0,b=1,fact=1;

 printf("Enter the limit\n");
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
    
    fact=fact*i;

 }
  printf("The Factorial of %d is =%d",n,fact);
}