#include <stdio.h>

int main() {
    int arr[] = {1, 2, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("false\n");
            return 0; 
        }
    }
    printf("true\n");

    return 0;
}
