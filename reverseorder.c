#include<stdio.h>
int main(){
int i=1,n;
printf("enter limit:");
scanf("%d",&n);

do{
printf("%d",i);

i++;}

 while(i<=n);

printf("\n");

do
{
   printf("%d",n);
   n--;
} while (1<=n);


return 0;
}