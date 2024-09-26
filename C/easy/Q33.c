#include<stdio.h>
int main(){   
    int year ;
      printf("Please enter your year: ");
        scanf("%d", &  year);
    if(year%100==0){
            printf("yes it is centurian year");
    }else{
        printf("no it is not centurian year");
    };
    return 0;
}