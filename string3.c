#include <stdio.h>
void findNumbers(char *s1){
    char s2[10];
    int j=0;
    for(int i=0;s1[i]!=0;++i){
            if(s1[i]>='0' && s1[i]<='9'){
                s2[j]+=s1[i];
                j++;
                }
                s2[j]='\0';
        } printf("%s ",s2);

 }
 int main(){
char *ss1="as1d2f3";
findNumbers(ss1);
return 0;
     }
