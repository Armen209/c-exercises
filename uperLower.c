#include <stdio.h>
int main(){
char c;
printf("Enter the letter\n");
scanf(" %c",&c);
    if(c>='A' && c<='Z')
    {
        printf("Upper\n");
        }
    else if(c>='a' && c<='z') {
        printf("Lower\n");
        }

    else printf("It is not letter\n");
return 0;
    }
