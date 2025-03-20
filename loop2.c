#include <stdio.h>
int main(){
int a;
int b;
printf("enter the value of a\n");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
if(b<a || b==a){
printf("b should be bigger than a\n");
} else {
 for(int i=a;i<=b;++i){
   if(i%5==0){
  printf("%d\n",i);

}
}



}

return 0;
}
