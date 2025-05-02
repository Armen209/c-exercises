#include <stdio.h>
int main(){
    FILE *file=fopen("text.txt","w");
    if(file==NULL){
        printf("Failed open file for writing \n");
        return 1;
        }

    fprintf(file,"hi this is first task with files \n");
    fclose(file);

    file= fopen("text.txt","r");
    if(file==NULL){
            printf("Failed to open file for reading:\n");
            return 1;
        }

    char line[100];
    while(fgets(line,sizeof(line),file)){
            printf("%s",line);
        }
   fclose(file);
return 0;
    }
