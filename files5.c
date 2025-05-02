#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *file1=fopen("a.txt","r");
        if(file1 == NULL){
            printf("Failed to read the file!!!\n");
                return 1;
            }
    fseek(file1,0,SEEK_END);
    long size=ftell(file1);

    FILE *file2=fopen("b.txt","w");
        if(file2 == NULL)   {
                printf("Failed to write !!!\n");
                    return 0;
            }

    for(long i=size-1;i>=0;--i){
            fseek(file1,i,SEEK_SET);
            char ch=fgetc(file1);
            fputc(ch,file2);
        }

    fclose(file1);
    fclose(file2);

    FILE *output= fopen("b.txt","r");
        if(output == NULL ){
                printf("Failed \n");
                return 0;
            }
    int ch;
    while((ch=fgetc(output))!=EOF){
            putchar(ch);
        }

    fclose(output);
    return 0;
    }
