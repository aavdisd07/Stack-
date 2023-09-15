#include<stdio.h>
void  main()
{
  int ds,ic,dm,m3,oops,total;
  float avg_marks;
   double percentage;
   int pass;
   //float ;
   printf(" Enter the marks obtained:\n");
  // printf("DS:%d\nIC:%d\nDM:%d\nM3:%d\nOops:%d\n");
    
     scanf("%d %d %d %d %d",&ds,&ic,&dm,&m3,&oops);
   
    printf("DS:%d\nIC:%d\nDM:%d\nM3:%d\nOops:%d\n",ds,ic,dm,m3,oops);
   
    total=ds+ic+dm+m3+oops;
    avg_marks=total/5.0;
   percentage=((total/500.0)*100.0);

  printf("Total marks obtained=%d\n Average marks =%f\n Percentage =%lf\n",total,avg_marks,percentage);

  if(pass=1){

  
     (ic<40)?printf("IC=fail\n"):printf("IC=pass\n"); 
     (ds<40)?printf("DS=fail\n"):printf("DS=pass\n");
     (m3<40)?printf("M3=fail\n"):printf("M3=pass\n");
     (oops<40)?printf("Oops=fail\n"):printf("Oops=pass\n");
     (dm<40)?printf("DM=fail\n"):printf(" DM=pass\n");
     }
    else 
     { pass=0;
       printf("Not qualify");
      // (total<40)?printf("fail"):printf("pass");
     }
  }



