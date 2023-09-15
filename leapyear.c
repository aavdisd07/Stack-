#include<stdio.h>
void main()
{
int year;

printf("Enter Year");
scanf("%d" ,&year);
if( year%400==0 || ( year%4==0 && year%100!=0))
{
printf(" THE Year is Leap year");
}
else {
printf (" The Year is not Leap Year");

}

}