//Replace all 0’s with 1 in a given integer
#include<stdio.h>

void main(){
    int num, remainder, reverse = 0, result = 0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num == 0){
        result = 1;
    }
    else{
        while(num > 0){
            remainder = num % 10;
            if(remainder == 0){
                remainder = 1;
            }
            reverse = (reverse * 10) + remainder;
            num /= 10;
        }
        while(reverse > 0){
            remainder = reverse % 10;
            result = (result * 10) + remainder;
            reverse /= 10;
        }
    }
    printf("\nResult:%d",result);
}


