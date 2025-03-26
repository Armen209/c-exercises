#include <stdio.h>
int main(){
int x[5];
for(int i=0;i<5;++i){
printf("Enter the element :\n");
scanf("%d",&x[i]);
}
int min=x[0];
for(int i=0;i<5;++i){
if(x[i]<min){
min=x[i];
}
}
printf("The minimum is : %d\n",min);
return 0;
}
