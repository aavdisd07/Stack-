#include<stdio.h>
#include<string.h>

void main(){

int i,j;
float salary,bonus;
char gender;
printf("Enter M for male and F for female\n");
scanf("%c",&gender);

printf(" Enter salary");
scanf("%f",&salary);
if( gender=='M' || gender=='m'  )
{if( salary>10000)
bonus=(float)( salary*0.05);

else
bonus=(float)( salary*0.07);

}{

if( gender=='F' || gender=='f'  )
{if( salary>10000)
bonus=(float)( salary*0.1);

else
bonus=(float)( salary*0.12);

}
salary=salary+bonus;
printf(" bonus=%.2f and salary=%.2f", bonus,salary);


}}