//NAND GATE
#include<stdio.h>

void main(){
    int num1,num2,result;
    printf("Enter (0 or 1) A:");
    scanf("%d",&num1);
    printf("\nEnter (0 or 1) B:");
    scanf("%d",&num2);
    result = !(num1 * num2);
    printf("Result of NAND :%d",result);
}


