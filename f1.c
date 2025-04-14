#include <stdio.h>
void baz(int n){
for(int i=1;i<=10;++i){
printf("%d * %d = %d \n", i,n,i*n);
}
}
int main(){
baz(5);
return 0;
}
