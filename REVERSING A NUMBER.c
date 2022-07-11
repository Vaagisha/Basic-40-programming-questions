//REVERSING A NUMBER
#include<stdio.h>

void main(){
    int num, remainder, reverse = 0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num > 0){
        remainder = num % 10;
        reverse = ( reverse * 10 ) + remainder;
        num /= 10;
    }
    printf("\nThe reverse number is : %d", reverse);

}
