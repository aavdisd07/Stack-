#include<stdio.h>
int main(){
int a,b,c,d;

printf("ENTER FOUR NUMBERS\n");
scanf("%d\n",&a);
scanf("%d\n",&b);
scanf("%d\n",&c);
scanf("%d",&d); 

if(a>b && a>c && a>d)
{ 
printf ( " THE NUMBER %d a IS GREATER NUMBER ",a);
}

else if(b>a && b>c && b>d)
{ 

printf ( " THE NUMBER %d b IS GREATER NUMBER ",b);

} 
  else if(c>a && c>b && c>d)

{ 

printf ( " THE NUMBER %d c IS GREATER NUMBER ",c);

}
else if
{

 printf ("THE NUMBER %d  d IS GREATER NUMBER ",d);
 
 }
 else  {

  printf (" ALL ARE EQUAL");
 }

return 0;

}