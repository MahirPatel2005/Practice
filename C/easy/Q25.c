#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    char words[10][20];
    int i = 0, j = 0, k = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]s", str); 
    // Split the string into words
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            words[k][j++] = str[i]; 
        } else if (j > 0) {
            words[k][j] = '\0';
            k++;                
            j = 0;                  
        }
        i++;
    }
    words[k][j] = '\0'; 
    printf("The words are:\n");
    for (i = 0; i <= k; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
