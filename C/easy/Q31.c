#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    int n;               
    char result[1000];    
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the number of times to repeat: ");
    scanf("%d", &n);
    result[0] = '\0'; 
    for (i = 0; i < n; i++) {
        for (j = 0; str[j] != '\0'; j++) {
            result[i * strlen(str) + j] = str[j]; 
        }
    }
    result[n * strlen(str)] = '\0';
    printf("Output: %s\n", result);

    return 0;
}
