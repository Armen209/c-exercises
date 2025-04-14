#include <stdio.h>
int numberIndex(char *str)
 {
    ;
    for(int i=0;str[i]!='\0';++i){
        if(str[i]>='0' && str[i]<='9')
         return i;
    } return -1;

        }

int main(){
    char *str="ab2cd";
    int res=numberIndex(str);
    printf("%d\n",res);
    return 0;

    }
