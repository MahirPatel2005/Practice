#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,6};
    int length = sizeof(arr) / sizeof(arr[0]);
    int positive =0 ;
    int negative = 0 ;
    for(int i = 0 ; i<length;i++){
        if(arr[i]>0){
          positive++;
        }
    };
    if(length==positive){
      printf("TRUE");
    }
    else{
      printf("FALSE");
    };
    
    return 0;
}