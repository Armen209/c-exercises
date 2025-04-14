#include <stdio.h>
void baz_ax(){
for(int i=1;i<10;++i){
for(int j=1;j<10;++j){
printf("%d * %d = %d \n",i,j,i*j);
}
}
}
int main(){
baz_ax();
return 0;
}
