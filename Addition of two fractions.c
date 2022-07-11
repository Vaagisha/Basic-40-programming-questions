//Addition of two fractions
#include<stdio.h>

void main(){
    int n1,d1,n2,d2;
    printf("Enter numerator and denominator of first number: ");
    scanf("%d %d",&n1,&d1);
    printf("Enter numerator and denominator of second number: ");
    scanf("%d %d",&n2,&d2);
    printf("\nSum of two fractions is : %d / %d or %f",(n1 * d2) + (n2 * d1),d1 * d2,((n1 * d2) + (n2 * d1))/(d1 * d2));
}
