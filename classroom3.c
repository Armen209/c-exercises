#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n){
        for(int i=2;i*i<=n;++i){
            if(n%i==0){
                    return false;
                }
            } return true;
    }

int *prime(int size1,int *arr1,int size2,int *arr2){
    int *arr3=(int*)malloc((size1+size2)*sizeof(int));
    int index=0;
        for(int i=0;i<size1;++i){
            if(isPrime(arr1[i])){
                arr3[index++]=arr1[i];
                }
            }
        for(int i=0;i<size2;++i){
            if(isPrime(arr2[i])){
                    arr3[index++]=arr2[i];
                }
            } return arr3;
    }

int main(){
    int size1=0;
    int size2=0;
    int *arr1;
    int *arr2;

        printf("Enter the size of the first array :\n");
        scanf("%d",&size1);
        printf("Enter the size of the second array :\n");
        scanf("%d",&size2);

        arr1=(int *)malloc(size1*sizeof(int));
        printf("Enter the elements of the first array :\n");
             for(int i=0;i<size1;++i){
                     scanf("%d",&arr1[i]);
            }
        arr2=(int *)malloc(size2 *sizeof(int));
        printf("Enter the elements of the second array :\n");
            for(int i=0;i<size2;++i){
                    scanf("%d",&arr2[i]);
                }
        int *arr3=(int *)malloc((size1 + size2) * sizeof(int));
        arr3=prime(size1,arr1,size2,arr2);
        for(int i=0;i<size1+size2;++i){
                printf("%d ",arr3[i]);
            }

        free(arr1);
        free(arr2);
        free(arr3);

        return 0;
    }
