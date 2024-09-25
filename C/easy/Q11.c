#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int uniqueArr[7]; // assuming max size of uniqueArr is 7
    int uniqueIndex = 0;

    for (int i = 0; i < 7; i++) {
        int isUnique = 1;
        for (int j = 0; j < uniqueIndex; j++) {
            if (arr[i] == uniqueArr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            uniqueArr[uniqueIndex++] = arr[i];
        }
    }

    for (int i = 0; i < uniqueIndex; i++) {
        printf("%d ", uniqueArr[i]);
    }
    printf("\n");

    return 0;
}