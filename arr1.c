#include <stdio.h>
int main(){
int x[5];
int max=x[0];
for(int i=0;i<5;++i){
printf("Enter the element :\n");
scanf("%d",&x[i]);
}

for(int i=1;i<5;++i){
if(x[i]>max){
max=x[i];
}

}
printf( "The maximum is : %d\n",max);

return 0;
}
