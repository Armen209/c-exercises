#include <stdio.h>
int main(){
    char buffer[100];
FILE *file=fopen("orinak.txt","r");
        if(file == NULL){
                printf("Filed to read \n");
                return 1;
            }
   size_t read=fread(buffer,sizeof(char),100,file);
   buffer[read] = '\0';

   printf("First read : \n%s\n\n",buffer);

   fseek(file, 0, SEEK_SET);

   read = fread(buffer , sizeof(char), 100 , file);
   buffer[read] = '\0';

   printf("Second read \n%s\n\n",buffer);

   fclose(file);

   return 0;



    }
