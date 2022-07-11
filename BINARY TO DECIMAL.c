//BINARY TO DECIMAL
#include<stdio.h>

void main(){
    int binary_no,i = 0,digit, num = 0;
    printf("Enter a binary number:");
    scanf("%d",&binary_no);
    while(binary_no > 0){
        digit = binary_no % 10;
        num += digit * power(2,i);
        i++;
        binary_no /= 10;
    }
    printf("\nThe corresponding integer number is:%d",num);
}

int power(number, exponent){
    int result = 1;
    for(int i = 1; i <= exponent; i++){
        result = result * number;
    }
    return result;
}
