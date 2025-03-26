#include <stdio.h>
int main(){
int x[5];
int sum=0;
for(int i=0;i<5;++i){
printf("Enter the elemenet : \n");
scanf("%d",&x[i]);
}
int max=x[0];
int min=x[0];
for(int i=1;i<5;++i){
if(x[i]<min){
min=x[i];
}

for(int i=1;i<5;++i){
if(x[i]>max){
max=x[i];
}
}
}
sum=min+max;
printf("The sum is : %d\n",sum);
return 0;
}
