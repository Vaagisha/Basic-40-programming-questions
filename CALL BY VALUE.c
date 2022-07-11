//CALL BY VALUE
#include<stdio.h>

void swap(int num1, int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping");
    printf("\nA: %d and B: %d",num1,num2);
}

void main(){
    int a, b;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);
    swap(a,b);
}
