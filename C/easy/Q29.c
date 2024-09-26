#include <stdio.h>

int main() {
    int nums[100]; 
    int n;          
    int target;      
    int i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("Output pairs of indices:\n");
    int found = 0;  
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j); // Print the indices of the pair
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pairs found that sum to %d.\n", target);
    }

    return 0;
}
