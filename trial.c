#include<stdio.h> 
void main (){

int n;
printf ("Enter the last digit:");
scanf ("%d",&n);
 int sum=0;
for (int  i=1,j=n;i<=n && j>=1;  i++, j--){
sum =sum+j; 


printf(" %d\n",j);

}
for( int i=1;i<=n; i++){
printf(" %d\n",i);}

 printf(" SUM=%d",sum);

}