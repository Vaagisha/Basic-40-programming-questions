//FIBONACCI SERIES
#include<stdio.h>

void main(){
    int terms, first = 0, second = 1, third;
    printf("Enter number of terms in fibonacci series:");
    scanf("%d",&terms);
    printf("\n0,1");
    while(terms > 0){
        third = second + first;
        first = second;
        second = third;
        printf(", %d",third);
        terms--;
    }
}
