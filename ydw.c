#include<stdio.h>
void main()
{int tday, days,years,weeks;
printf(" Enter total days\n");
scanf("%d",&tday);
years =tday/365;
weeks=(tday%365)/7;
days=(tday%365)%7;


printf("%d=years weeks =%d  days = %d", years,weeks,days);

}