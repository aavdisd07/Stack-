#include<stdio.h>
void main(){
int i,a,b;
printf(" Enter 2 digits\n");
scanf("%d %d", &a,&b);
printf("Enter 1 for Addition\n");
printf("Enter 2 for Substraction\n");
printf("Enter 3 for Multiplication\n");
printf("Enter 4 for Division\n");
printf("Enter 5 for module (Remainder)\n");
scanf("%d",&i);
switch(i){
case 1:printf("The Add of %d and %d is %d ",a,b,a+b);
break;
case 2:printf("The Sub of %d and %d is %d ",a,b,a-b);
break;

case 3:printf("The Mult of %d and %d is %d ",a,b,a*b);
break;
case 4:printf("The Div of %d and %d is %d ",a,b,a/b);
break;
case 5:printf("The Module of %d and %d is %d ",a,b,a%b);
break;


}

}

