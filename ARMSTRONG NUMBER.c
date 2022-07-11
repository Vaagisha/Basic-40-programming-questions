//ARMSTRONG NUMBER
#include<stdio.h>

void main(){
    int num, remainder, result = 0;
    printf("Enter a number:");
    scanf("%d",&num);
    int copy = num;
    int digits = 0;
    int copy1 = num;
    while(copy1 > 0){
        digits++;
        copy1 /= 10;
    }
    while(num > 0){
        remainder = num % 10;
        result += power(remainder,digits);
        num /= 10;
    }
    copy == result ? printf("\n%d is an Armstrong number",copy):printf("\n%d is not an Armstrong number",copy);
}

int power(number, exponent){
    int result = 1;
    for(int i = 1; i <= exponent; i++){
        result *= number;
    }
    return result;
}
