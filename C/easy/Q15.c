#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int newarr[] = {};
    int length = (sizeof(arr) / sizeof(arr[0]))-1;
    
    for(int i = 0 ; i<length;i++){
      newarr[i]=arr[i];
    };
    for (int j = 0; j < length; j++) {
        printf("%d ", newarr[j]);
    };
    return 0;
}
