//Sum of digits of a number
#include<stdio.h>

void main(){
    int num, sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num / 10 == 0){
        sum = num;
    }
    else{
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
    }
    printf("\n Sum of digits = %d",sum);

}
