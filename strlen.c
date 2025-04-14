#include <stdio.h>
int my_strlen(char *str){
    int count=0;
    while(*str!='\0'){
    count++;
    str++;
        }
        return count;
    }

int main(){
    char *arr="hello";
  int length=my_strlen(arr);
  printf("%d\n",length);
        return 0;
    }
