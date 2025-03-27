#include <stdio.h>
int main(){
int x[5];
int y[5];
int result=1;
for(int i=0;i<5;++i){
printf("Enter the element for the first array : \n");
scanf("%d",&x[i]);
}
for(int j=0;j<5;++j){
printf("Enter the element for the seccond array : \n");
scanf("%d",&y[j]);
} 
for(int i=0;i<5;++i){
result=x[i]*y[i];
printf("The result is : %d\n",result);
}



return 0;
}
