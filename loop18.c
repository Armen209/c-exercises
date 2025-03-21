#include <stdio.h>
int main(){
int n;
printf("enter a number\n");
scanf("%d",&n);
for(int i=1;i<=n;++i){
printf("\n");
for(int j=1;j<=n;++j){
printf("*");
}
}

return 0;
}
