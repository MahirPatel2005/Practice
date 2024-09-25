#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create a new array with an additional space for the new number
    int newSize = size + 1;
    int newArr[newSize];

    // Copy the old array to the new array
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    // Add the number 6 at the end
    newArr[newSize - 1] = 6;

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}
