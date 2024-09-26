#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    printf("Enter a string: ");
    scanf(" %s", & str); 
    char str2; 
    printf("Enter a letter: ");
    scanf(" %c", & str2); 
    int length = 0 ;
    while (str[length] != '\0') {  
        length++;
    };
    int y = length-1;
    if(str[y]==str2){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
