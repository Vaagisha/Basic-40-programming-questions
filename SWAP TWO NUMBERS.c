//swap two no. without using third variables
#include<stdio.h>

void main(){
    int num1,num2;
    printf("Enter any value of A:");
    scanf("%d",&num1);
    printf("\nEnter any value of B:");
    scanf("%d",&num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\nNew value of A:%d",num1);
    printf("\nNew value of B:%d",num2);
}
