#include <stdio.h>
int main(){
    int x=4;
    int y=5;
    int *p1=&x;
    int *p2=&y;
    printf("%d \n",*p1+ *p2);
    printf("%d \n",*p1- *p2);


}
