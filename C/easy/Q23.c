#include <stdio.h>

int main() {
    char str1[100];  
    char str2[100];
    char str3[100];

    printf("Enter a string1: ");
    scanf("%s", & str1);
    printf("Enter a string2: ");
    scanf("%s", & str2);
    int length = 0 ;
    int length2 = 0 ;
    while (str1[length] != '\0') {  
        length++;
    };
    while (str2[length2] != '\0') {  
        length2++;
    };
    for(int i = 0 ; i<length;i++){
        str3[i]=str1[i];
    };
    for(int j = 0 ; j<length2;j++){
        int q = length +j;
        str3[q]=str2[j];
    };
    printf("%s",str3);

    return 0;
}
