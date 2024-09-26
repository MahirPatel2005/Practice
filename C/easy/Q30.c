#include <stdio.h>

int main() {
    int n;                // Input integer
    int evenSum = 0;     // Sum of even digits
    int oddSum = 0;      // Sum of odd digits

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Process each digit
    while (n != 0) {
        int digit = n % 10; // Get the last digit

        if (digit % 2 == 0) {
            evenSum += digit; // Add to evenSum if digit is even
        } else {
            oddSum += digit;  // Add to oddSum if digit is odd
        }

        n /= 10; // Remove the last digit
    }

    // Output the sums
    printf("Sum of even digits: %d\n", evenSum);
    printf("Sum of odd digits: %d\n", oddSum);

    return 0;
}
