#include <stdio.h>
int main(){
int digit=0;
int factorial=1;

printf("enter the number to calculate the factorial\n");
scanf("%d",&digit);
if(digit==0){
factorial=1;
} else {
for(int i=1;i<=digit;++i){
factorial*=i;

}
printf("%d\n",factorial);
}

return 0;

}
