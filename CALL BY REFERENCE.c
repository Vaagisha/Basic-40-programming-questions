//CALL BY REFERENCE
#include<stdio.h>

void swap(int* num1,int* num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void main(){
    int a, b;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping");
    printf("\nA: %d and B: %d",a,b);
}
