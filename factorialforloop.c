#include<stdio.h>
void main(){
int i,fact=1;
printf("ENTER THE LIMIT:");
scanf("%d",&i);
for( int q=i; q>=1 ; q--){
fact=fact*q;
printf("%d\n",q);

}
printf(" THE factorial is %d\n",fact);

}