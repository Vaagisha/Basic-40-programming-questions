//calculator using switch case
#include<stdio.h>

void main(){
    char choice;
    int num1, num2;
    printf("------------CALCULATOR------------");
    printf("\n\n Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("\n + for ADDITION");
    printf("\n - for SUBTRACTION");
    printf("\n * for MULTIPLICATION");
    printf("\n / for DIVISION");

    printf("\n Enter your choice:");
    scanf("%s",&choice);
    switch(choice){
    case '+':
        printf("\n ADDITION of %d and %d is: %d",num1,num2,num1 + num2);
        break;
    case '-':
        printf("\n SUBTRACTION of %d and %d is: %d",num1,num2,num1 - num2);
        break;
    case '*':
        printf("\n MULTIPLICATION of %d and %d is: %d",num1,num2,num1 * num2);
        break;
    case '/':
        printf("\n DIVISION of %d and %d is: %d",num1,num2,num1 / num2);
        break;
    default:
        printf("\n Enter a correct choice");
        break;
    }
}
