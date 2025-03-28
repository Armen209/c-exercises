#include <stdio.h>
int main(){
int x[5], target;
printf("Enter the target :\n");
scanf("%d",&target);
for(int i=0;i<5;++i){
printf("Enter the element for array :\n");
scanf("%d",&x[i]);
}
for(int i=0;i<5;++i){
if(x[i]==target){
printf("%d \n",i);
return 0 ;
}
} 
printf("-1 \n");



return 0;
}
