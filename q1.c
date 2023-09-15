#include<stdio.h>
void main(){
int p,sum=0;
printf("ENTER THE LAST DIGIT:");
scanf("%d",&p);

for( int m=p; m>=1;m--)
  { sum = sum+m;

   printf("%d\n", m);

}

printf (" sum=%d",sum);
}