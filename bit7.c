#include <stdio.h>
int main(){
int n,index,m;
printf("Enter the number\n");
scanf("%d",&n);
printf("Enter the index\n");
scanf("%d",&index);
m=n | (1 << index);
printf("%d\n",m);

return 0;
}
