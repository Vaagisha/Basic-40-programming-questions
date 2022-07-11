//multiply two numbers without using (*)
#include<stdio.h>

void main(){
    int num1 , num2 ,result = 0;
    printf("Enter any two numbers:");
    scanf("%d %d",&num1,&num2);
    for(int i = 0; i < num1; i++){
        result += num2;
    }
    printf("\nMultiplication of %d and %d is: %d",num1,num2,result);
}
