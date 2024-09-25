#include <stdio.h>

int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];  
    int min = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }

    
    int difference = max - min;
    printf("The difference between the maximum and minimum elements is: %d\n", difference);

    return 0;
}
