#include <stdio.h>
#include <stdlib.h>
int removeOdd(int *arr,int size){
    int j=0;
    for(int i=0;i<size;++i){
            if(arr[i] % 2 !=0){
                    arr[j++]=arr[i];
                }
        } return j;
    }

int main(){
    int size=0;
    int *arr;

    printf("Enter the size of the array :\n");
    scanf("%d",&size);

    arr=(int *) malloc(size *sizeof(int));
    if(arr== NULL){
        printf("Memory allocation failed :\n");
            return 1;
        }

    printf("Enter the elements of the array :\n");
        for(int i=0;i<size;++i){
                scanf("%d",&arr[i]);
            }

    int newSize=removeOdd(arr,size);

    printf("The result of removing odd numbers :\n");
        for(int i=0;i<newSize;++i){
            printf("%d",arr[i]);
            }

            printf("\n");
            free(arr);

        return 0;

    }
