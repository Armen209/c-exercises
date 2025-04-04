#include <stdio.h>
int main(){
    int x=3;
    float y=2.45;
    char z='D';
    int *p1=&x;
    float *p2=&y;
    char *p3=&z;


    printf("%p %p %p \n ",(void*)p1,(void*)p2,(void*)p3);


    return 0;
}
