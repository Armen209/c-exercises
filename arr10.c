#include <stdio.h>
int main(){
int x[5];
int count=0;
int mij_tv=1;
int sum=0;
for(int i=0;i<5;++i){
printf("Enter the elements of array : \n");
scanf("%d",&x[i]);
}
for(int i=0;i<5;++i){
sum+=x[i];
count++;
}
mij_tv=sum/count;
printf("The result is : %d\n",mij_tv);
return 0;
}
