#include <stdio.h>
int main(){
int n;
int a=0;
int b=1;
int fib;

printf("Enter the index\n ");
scanf("%d",&n);
if(n<0){
printf("The indec must be positive\n");

}
if(n==0){
printf("%d\n",a);

}
if(n==1){
printf("%d\n",b);
}
for(int i=0;i<=n;++i){
fib=a+b;
a=b;
b=fib;
}
printf("%d\n",fib);
return 0;
}
