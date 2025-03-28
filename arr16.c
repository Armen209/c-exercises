#include <stdio.h>
int main(){
int x[5],y[5];
int isEqual=1;
for(int i=0;i<5;++i){
printf("Enter the element for X array : \n");
scanf("%d",&x[i]);
}
printf("______________\n");
for(int i=0;i<5;++i){
printf("Enter the element for Y array :\n");
scanf("%d",&y[i]);
}

for(int i=0;i<5;++i){
if(x[i] !=y[i]);
isEqual=0;
break;
}
if(isEqual){
printf("Arrays are equal \n");
} else {
printf("Arrays are not equal \n");
}
return 0;
}
