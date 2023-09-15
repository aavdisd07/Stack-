#include<stdio.h>
void main(){
int n,i;
printf("Enter number:");
scanf("%d",&n);
int sum=0;
for ( int i = 1; i<=n ; i++)
{
    sum=sum+i;
    

 printf("%d\n", i);

}
printf(" The sum is : %d\n",sum);
}