#include <stdio.h>

int main() {
    int num1;
    int num2;
    printf("Enter num1: ");
    scanf("%d", & num1);
    printf("Enter num2: ");
    scanf("%d", & num2);
    if(num1>num2){
        printf("the largest no. is : %d",num1);
    }else if(num2>num1){
        printf("the largest no. is : %d",num2);
    }else{
         printf("both are equal");
    }
    return 0;
}
