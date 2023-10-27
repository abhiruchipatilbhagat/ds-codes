#include <stdio.h>
    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
int main(){

    int array[]= {10, 7, 4, 9, 2, 1};
    int size = sizeof(array) / sizeof(int);
    for(int i=size-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if (array[j]>array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
    printf("sorted array:");
    for (int k =0; k<size; k++){
        printf("%d ", array[k]);
    }
return 0;
}