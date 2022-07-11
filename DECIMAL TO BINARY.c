//DECIMAL TO BINARY
#include<stdio.h>

void main(){
    int num, result, binary_no = 0;
    int i = 0;
    printf("Enter a decimal number:");
    scanf("%d",&num);
    while(num > 0){
        result = num % 2;
        binary_no += result * power(10, i);
        i++;
        num /= 2;
    }
    printf("\nThe corresponding binary number is: %d",binary_no);
}


int power(number, exponent){
    int result = 1;
    for(int i = 1; i <= exponent; i++){
        result = result * number;
    }
    return result;
}
