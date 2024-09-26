#include<stdio.h>
int main(){   
    int age ;
      printf("Please enter your Age: ");
        scanf("%d", &  age);
    if(age<13){
            printf("CHILD");
    }else if (age<20 && age>=13){
        printf("TEENAGER");
    }else if (age<60 && age>=20){
        printf("ADULT");
    }else if (age>=60){
        printf("SENIOR");
    }else{
        printf("invalid Input");
    };
    return 0;
}