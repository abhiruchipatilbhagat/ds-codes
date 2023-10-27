#include <stdio.h>
int linearSearch(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if (arr[i]==element){
            return i;
        }
    }
    return -1;
}
int Binaysearch(int arr[], int size, int element){
    int lb = 0;
    int ub = size - 1;
    while(lb<=ub){
        int mid= (lb+ub)/2;
        if(element==arr[mid]){
            return mid;
            break;
        }
        else if(arr[mid]>element){
            ub = mid - 1;
        }
        else{
            lb = mid + 1;
        }
    }
    return -1;
}
int main(){
int array[]= {1, 2, 3, 4};
int s = sizeof(array)/sizeof(int);
int ls = linearSearch(array, s, 3);
if(ls!=-1){
    printf("element found at %d\n", ls+1);
}
else if(ls == -1){
    printf("element not in the array\n");
}
int bs = Binaysearch(array, s, 4);
if(bs!=-1){
    printf("element found at %d", bs+1);
}
else if(bs == -1){
    printf("element not in the array");
}

return 0;
}