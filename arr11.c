#include <stdio.h>
int main(){
int x[5];
int num=0;
printf("Enter the number :\n");
scanf("%d",&num);
for(int i=0;i<5;++i){
printf("Enter the elements for array :");
scanf("%d",&x[i]);
}
for(int i=0;i<5;++i){
if(x[i]==num){
printf("Yes\n");
} else {
printf("No\n");
}
}


return 0;
}
