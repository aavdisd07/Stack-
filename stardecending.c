#include<Stdio.h>
int main(){
printf("\n");
 for(int i=1;i<=5;i++)   //rows
{
for( int j=i;j<5;j++) //space
       {

    printf(" ");
       }
for(int k=1;k<=i;k++)  //column
    {
printf("* ");
    }
printf("\n");
}
printf("\n");



for( int i=1;i<6;i++)
{
for( int j=i;j<5;j++)
{
    printf(" ");
printf("*");

}
printf("\n");

}
printf("\n");


for( int i=1;i<6;i++){
for(int j=1;j<=i;j++){
    printf("* ");
}
printf("\n");

}
printf("\n");

for( int i=1;i<6;i++){
for(int j=1;j<=6;j++){
    printf("* ");
}
printf("\n");

}
printf("\n");

for(int i=1; i<6;i++){
for( int j=5;j>=i ;j--)
{
     printf("* ");
}
 printf("\n");
}
printf("\n");

for(int i=1;i<6;i++){
for(int j=1; j<i ;j++){
printf(" ");

} for (int k=i;k<6; k++)

{
    printf("*");
}

printf("\n");


}

return 0;
}