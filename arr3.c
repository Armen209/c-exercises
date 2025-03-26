#include <stdio.h>
int main(){
int x[5];
int maxIndex;
for(int i=0;i<5;++i){
printf("Enter the element :\n");
scanf("%d",&x[i]);
}
int max=x[0];
for(int i=1;i<5;++i){
if(x[i]>max){
max=x[i];
maxIndex=i;
}
}
printf("The index is maximum element is : %d\n",maxIndex);
return 0;
}
