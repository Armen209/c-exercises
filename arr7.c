#include <stdio.h>
int main(){
int x[5];
for(int i=0;i<5;++i){
printf("Enter the element :\n");
scanf("%d",&x[i]);
}
for(int i=0;i<5;++i){
x[i]=x[i]/(sizeof(x)/sizeof(x[0]));
printf("The changed array : %d \n",x[i]);

}

return 0;
}
