#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for(int i = 0 ;i<length;i++){
      if(arr[i]==3){
        count = count+1;
      };
    };
    if(count>0){
      printf("TRUE");
    }
    else{
      printf("FALSE");
    }
    return 0;
}
