//HCF
#include<stdio.h>

void main(){
    int num1,num2, small;
    printf("Enter any two numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1 - num2 > 0){
        small = num2;
    }
    else{
        small = num1;
    }
    for(int i = small; i >= 1; i--){
        if(num1 % i == 0 && num2 % i == 0){
            printf("\nHCF of %d and %d is: %d",num1,num2,i);
            break;
        }
    }

}
