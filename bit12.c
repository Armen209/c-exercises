#include <stdio.h>
int main(){
long int n;
printf("Enter the number\n");
scanf("%ld",&n);
n=~n;
printf("%ld",n);
return 0;
}
