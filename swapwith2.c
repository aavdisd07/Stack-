#include<stdio.h>
void main()
{
int a,b;
printf(" Enter a and b values:");
scanf("%d %d",&a,&b);

printf("a=%d and b=%d before swaping\n", a,b);

a=a+b;
b=a-b;
a=a-b;


printf("a=%d and b=%d after  swaping\n", a,b);




}