
#include <stdio.h>
int main(){
int n;
int count=0;
printf("enter a number \n");
scanf("%d",&n);
while(n!=0){
if(n & 1){
count++;}
n>>=1;
}

if(count==1)	{
printf("true\n");
}else {
printf("false\n");
}
return 0;
}
