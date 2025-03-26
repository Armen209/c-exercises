#include <stdio.h>
int main(){
int x[5];
int minIndex;
for(int i=0;i<5;++i){
printf("Enter the element %d:\n",i);
scanf("%d",&x[i]);
}
int min=x[0];
for(int i=1;i<5;++i){
if(x[i]<min){
min=x[i];
minIndex=i;
}
}
printf("The index of minimum element is :%d\n",minIndex);
return 0;
}
