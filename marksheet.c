#include<stdio.h>
void main()
{
  int  p, c, m; 
   float total;
  printf(" Enter the marks of phy chem & math\n");
  scanf("%d\n %d\n %d",&p,&c,&m);
      total=((p+c+m)/3)*100;
 if((total>=40)&& p>=33 && c>=33 && m>=33) 
  {
     printf ("pass");
  }
   else 
  {
 printf("fail");
  }

}