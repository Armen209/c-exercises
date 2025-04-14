#include <stdio.h>
void lowerToUpper(char *s){
    char *p=s;
    while(*p!='\0'){
        if(*p>='a' && *p<='z')
        {
           * p-=32;

            }++p;
        } printf("%s\n",s);
    }
int main(){
char ss[]="aRmEn";
lowerToUpper(ss);
//printf("%d\n",res);
return 0;
    }
