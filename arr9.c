#include <stdio.h>
int main(){
int x[5];
int y[5];
for(int i=0;i<5;++i){
printf("Enter the elements of X array : \n");
scanf("%d",&x[i]);
}
for(int i=4, j=0;i>0,j<5;--i,++j){
y[j]=x[i];
printf("Y array : %d\n",y[j]);
}
return 0;
}
