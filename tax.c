#include<stdio.h>
int main()
{
float tax=0, income;
printf( " enter your income\n");
scanf ( "%f" , &income);

if ( income >=25000 && income <=50000)

{
   tax=tax +0.05*(income -25000); 
}
   
if ( income >=50000 && income <=100000)

{
   tax=tax +0.35*(income -25000); 
}

if ( income >=100000 && income <=200000)

{
   tax=tax +0.45*(income -25000); 
}
 printf (" Your tax amount is=%f" ,tax);
 return 0; 
}
