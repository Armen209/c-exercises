#include <stdio.h>
int main(){
int num;
int reversed=0;
int digit;
int original;

printf("Enter the number\n");
scanf("%d",&num);
original=num;

if(num<0){
printf("the number must  be positive\n ");
}
while(num>0){
digit = num%10;
reversed= reversed *10+digit;
num /=10;

}
if(reversed==original){
printf("%d is palindrome\n",original);
} else {
printf("%d is not palindrome \n",original);
}

return 0;
}
