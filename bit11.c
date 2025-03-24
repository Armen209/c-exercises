#include <stdio.h>
int main(){
int n,i,j;
printf("Enter the number :\n");
scanf("%d",&n);
printf("Enter first index :\n");
scanf("%d",&i);
printf("Enter second index :\n");
scanf("%d",&j);
int bit1=(n >> j) & 1;
int bit2=(n >> j) & 1;
if(bit1 != bit2){
int mask = (1 << i) | (1 << j);
n = n ^ mask;
}
printf("Changed number : %d", n);

return 0;
}
