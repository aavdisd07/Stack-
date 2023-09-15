 #include<stdio.h> 
void main(){
printf( "Array is storage of same data type in contagious memory location");
int a[]={ 11,22,33,44,55,66,77,88,99,100};

int i;
for(i=0;i<10;i++){
printf(" %d ",a[i]);

}
printf("\n");

for(i=9;i>=0;i--){
printf(" %d ",a[i]);

}
printf("\n");

printf(" enter the place of no.\n");
scanf("%d",&i);
printf(" The no. at %d location is %d", i,a[i]);

}