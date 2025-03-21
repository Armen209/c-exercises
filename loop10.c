#include <stdio.h>
int main(){
int num;
printf("enter the number\n");
scanf("%d",&num);
if(num<0){
printf("-");
num=-num;
} else {
printf("%d\n",num%10);
num/=10;
}
return 0;
}
