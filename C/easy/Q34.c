#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]); 
    printf("Array elements: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 

    int firstElement = arr[0];         
    int lastElement = arr[length - 1]; 
    printf("First element: %d\n", firstElement);
    printf("Last element: %d\n", lastElement);

    return 0;
}
