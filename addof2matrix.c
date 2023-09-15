#include<stdio.h>
void main()
{
 int i,j,a[3][3],b[3][3],c[3][3];
 
  printf("Enter the elements of matrix A:\n"); 
   
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         scanf("%d",&a[i][j]);
          

      }
   }

    printf("Matrix A=\n");   

    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         printf(" %d",a[i][j]);
          
      }
      printf("\n");
                      
  }
    printf("Enter the elements of matrix B:\n"); 

      for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         scanf("%d",&b[i][j]);
          
      }
      }
    printf("Matrix B=\n");    
  
     for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         printf("%d ",b[i][j]);
          
      }
      printf("\n");
                      
  }

    
    printf("Matrix C=\n");    
  
   for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
         printf("%d ",a[i][j]+b[i][j]);  
      }
      printf("\n");
                      
  }

}