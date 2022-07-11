//Counting number of days in a given month of a year
#include<stdio.h>

void main(){
    int num;
    printf("Enter the month number:");
    scanf("%d",&num);
    switch(num){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\nThis month has 31 days");
            break;
        case 2:
            printf("\nThis month has 28 or 29 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\nThis month has 30 days");
            break;
        default:
            printf("\nEnter correct month number");
            break;
    }
}
