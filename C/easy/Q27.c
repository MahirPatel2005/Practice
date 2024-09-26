#include <stdio.h>

int main() {
    char filename[100];
    char extension[20];
    int i = 0, j = 0;
    int dotIndex = -1; 
    printf("Enter the filename: ");
    scanf("%s", filename);
    while (filename[i] != '\0') {
        if (filename[i] == '.') {
            dotIndex = i;
        }
        i++;
    }
     if (dotIndex != -1) {
        for (j = 0; filename[dotIndex + 1 + j] != '\0'; j++) {
            extension[j] = filename[dotIndex + 1 + j];
        }
        extension[j] = '\0'; 
        printf("File extension: %s\n", extension);
    } else {
        printf("No file extension found.\n");
    }

    return 0;
}
