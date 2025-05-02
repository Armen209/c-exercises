#include <stdio.h>
int main(){
    FILE *file=fopen("orinak.txt","r");
        if(file == NULL){
                printf("Failde to open for reading \n");
                return 1;
            }

    char ch;
    int count=0;
    while((ch=fgetc(file)) != EOF){
            if(ch>='0' && ch<='9'){
                    ++count;
                }
        }

    printf("%d \n",count);

    fclose(file);




return 0;
    }
