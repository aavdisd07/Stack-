#include<stdio.h>
void main()
{
   int l1=6,l2=6, flag1=0,flag2=0;
    int a1[6]={6,4,2,1,5,7};
    int b2[6]={3,5,7,8,6,9};
 int ui[12]={1,2,3,4,5,6,7,8,9};
     int  inter[l1];
 
for(int i=0;i<l2;i++)
{
    flag1=l1;
    for(int k=0;k<l1;k++)
    {
       if(b2[i]==ui[k])
       break; else if (k==l1-1)
       {
          ui[flag1]=b2[i];
          flag1=flag1+1;
       }
    }
}
 for(int p=0;p<l1;p++)
{
    flag1=l1;
    for(int w=0;w<l2;w++)
    {
       if(a1[p]==b2[w])
       {
           inter[flag2]=b2[w];
            
               flag2=flag2+1;
               break;
       }
    
    }
}
 printf("Union:");
 for(int y=0;y<flag1;y++)
 {
  printf("%d ",ui[y]);
 }
 
  printf("\nIntersection:");
 for(int y=0;y<flag2;y++)
 {
  printf("%d ",inter[y]);
 }
}