#include <stdio.h>
int main(){
int x[5];
int sum=0;
int product=1;
for(int i=0;i<5;++i){
printf("Enter the element :\n");
scanf("%d",&x[i]);
}
for(int i=0;i<5;++i){
sum+=x[i];
product*=x[i];
}

printf("Sum = %d \n Product = %d \n",sum , product);



return 0;
}
