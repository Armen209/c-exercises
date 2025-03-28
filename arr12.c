#include <stdio.h>
int main(){
char x[7];
printf("Enter the elements of array \n");
scanf("%s",x);
for(int i=0;i<7;++i){
if(x[i]>='a' && x[i]<='z'){
x[i]-=32;
}
}

printf("Changed arr : %s",x);
return 0;
}
