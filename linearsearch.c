#include <stdio.h>
int main(){
    int arr[10] = {1, 4, 2, 6, 17, 5, 9, 7, 19, 42};
    int element = 18;
 int m = sizeof(arr)/sizeof(arr[0]);
 int found = 0;
 int position = 0;
    for (int i=0; i<m; i++){
        if (arr[i]==element){
            found = 1;
            position = i+1;
            break;
        }
    }
    if (found==1){
        printf("element found at %d", position);
    }
    else{
        printf("element not found in the array");
    }
    return 0;
}