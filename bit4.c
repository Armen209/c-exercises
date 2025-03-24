#include <stdio.h>
int main(){
int n;
int count=0;
printf("Enter the number\n");
scanf("%d",&n);
while(n!=0){
if(n&1){
count++;
}
n>>=1;
} if(count%2==0){
printf("zuyg\n");
} else {
printf("kent\n");
}

return 0;
}
