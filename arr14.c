#include <stdio.h>
int main(){
int arr[10];
int size=10;
for(int i=0;i<10;++i){
printf("Enter the elements of array : \n");
scanf("%d",&arr[i]);
}
for(int i=0;i< size/2;++i){
int tmp=arr[i];
arr[i]=arr[size - 1 -i];
arr[size -1-i]=tmp;
}

for(int i=0;i<10;++i){
printf("%d ", arr[i]);
}
return 0;
}
