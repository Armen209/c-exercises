#include <stdio.h>
int main(){
int x[5];
for(int i=0;i<5;++i){
printf("Enter the elements for array :\n");
scanf("%d",&x[i]);
}
int flag=1;
for(int i=1;i<5;i++){
if(x[i]>x[i-1]){
flag=0;
break;
}
 }
if(flag)
printf("Yes \n");
 else 
printf("No \n");

return 0;
}
