#include <stdio.h>
int main(){
    FILE *file=fopen("text.txt","r+");
        if(file==NULL){
                printf("Failed to open file for reading\n");
                return 1;
            }

    char ch;
    long pos;
    while((ch=fgets(file) != EOF)){
            if(ch>='A' && ch<='Z'){
                ch+=32;
                pos=ftell(file);
                fseek(file, pos - 1,SEEK_SET);
                fputc(ch,file);
                }
        }

        fclose(file);

        file=fopen("text.txt","r");
            if(file==NULL){
                    printf("Filed to open the file for reading\n");
                    return 1;
                }

        char line[100];
        while(fgets(line,sizeof(line),file)){
                printf("%s",line);
            }

        fclose(file);
        return 0;
    }
