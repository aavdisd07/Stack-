#include<stdio.h>
int main(){
char a[2][2];
 int i,j;
printf(" Enter 4 names for 2*2 matrix:\n");
for( i=0;i<2;i++)
{ for ( j=0;j<2;j++){
scanf(" %c",&a[i][j]);
}}
printf("The matrix is:\n");
for( i=0;i<2;i++)
{for ( j=0;j<2;j++){
printf(" %c ",a[i][j]);}
printf(" \n");
}



return 0;

}