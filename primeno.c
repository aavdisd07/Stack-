#include<stdio.h>
void main()
{ 
int n,prime=1;
printf("Enter the number");
scanf("%d",&n);
for(int i=2;i*i<=n;i++){
     if(n%i==0){
      prime=0;
     }

     }
  if(prime){
    printf("The %d is prime",n);
  }

  else {
    printf(" %d is not PRIME ",n);

}
