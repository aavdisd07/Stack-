#include<stdio.h>
void value(int *,int *);
 
 void main()
{
 int p,q;
    printf(" Enter the values of P and Q:\n");
    scanf("%d%d",&p,&q);
   printf("Function is calling\n");
   value(&p,&q);
    printf("Function is ended\n");
   printf("%d\n%d",p,q);
 

}
void value (int *s, int *t)
{
    
   (*s)++;
   (*t)++;
  printf("%d (in fun call)",*s);
  printf("%d (in fun call)",*t);
}