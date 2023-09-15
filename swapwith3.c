#include<stdio.h>
void main()
{
int a,b,c;
printf(" Enter the values for a and b:");
scanf("%d %d",&a, &b);
printf("a=%d and b=%d before swaping\n", a ,b);

c=a;
a=b;
b=c;

printf("a=%d and b=%d after swaping", a ,b);

}