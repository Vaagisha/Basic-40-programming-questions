//PALINDROME NUMBER
#include<stdio.h>

void main(){
    int num, remainder, reverse = 0;
    printf("Enter a number:");
    scanf("%d",&num);1
    int copy = num;
    while(num > 0){
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num /= 10;
    }
    copy == reverse ? printf("\n%d is a palindrome number",copy):printf("\n%d is not a palindrome number",copy);
}
