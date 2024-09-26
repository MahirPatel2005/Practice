#include <stdio.h>
#include <ctype.h>  // For isspace() function
int main() {
    char str[100];
    int start = 0, end, i;
    printf("Enter a string: ");
    scanf(" %[^\n]s", str); 
    while (isspace(str[start])) {
        start++;
    }
    end = start;
    while (str[end] != '\0') {
        end++;
    }
    end--;
    while (end >= start && isspace(str[end])) {
        end--;
    }
   for (i = 0; start <= end; start++, i++) {
        str[i] = str[start];
    }
    str[i] = '\0';
    printf("Trimmed string: \"%s\"\n", str);
     return 0;
}
