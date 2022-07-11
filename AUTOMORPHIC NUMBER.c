//AUTOMORPHIC NUMBER
#include<stdio.h>

void main(){
    int num, square, count = 0;
    printf("Enter a number:");
    scanf("%d",&num);
    square = num * num;
        while(num > 0){
        if((square % 10) != (num % 10)){
            count++;
        }
        num /= 10;
        square /= 10;
    }
    count == 0 ? printf("\nIt is an Automorphic number"):printf("\nIt is not an Automorphic number");
}
