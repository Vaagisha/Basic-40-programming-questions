//FACTORIAL
#include<stdio.h>

void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\nFactorial of %d is %d", num,factorial(num));
}

int factorial(number){
    if(number == 1){
        return 1;
    }
    return number * factorial(number - 1);
}
