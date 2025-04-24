#include <stdio.h>
#include <stdlib.h>
int *third(int size1,int *arr1,int size2,int *arr2,int *resultSize){
    int *arr3=(int*)malloc((size1+size2)*sizeof(int));
        int index=0;
        for(int i=0;i<size1;++i){
                if(arr1[i] % 2 !=0){
                    arr3[index++]=arr1[i];
                    }
            }
        for(int i=0;i<size2;++i){
                if(arr2[i] % 2 !=0){
                    arr3[index++]=arr2[i];
                    }
                    *resultSize=index;
            } return arr3;
    }

int main(){
    int size1=0;
    int size2=0;
    int *arr1;
    int *arr2;

    printf("Enter the size of the first array: \n");
    scanf("%d",&size1);
    printf("Enter the size of the second array: \n");
    scanf("%d",&size2);

    arr1=(int*)malloc(size1*sizeof(int));
    printf("Enter the elements of array 1: \n");
     for(int i=0;i<size1;++i){
            scanf("%d",&arr1[i]);
        }
    arr2=(int*)malloc(size2*sizeof(int));
    printf("Enter the elements of array 2: \n");
        for(int i=0;i<size2;++i){
            scanf("%d",&arr2[i]);
            }
    printf("The new array of odd elements \n");
    int resultSize;
    int *arr3=third(size1,arr1,size2,arr2,&resultSize);
        for(int i=0;i<resultSize;++i){
                printf("%d ",arr3[i]);
            }
    free(arr1);
    free(arr2);
    free(arr3);
                return 0;
    }
