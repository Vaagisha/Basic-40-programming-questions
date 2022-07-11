//LEAP YEAR
#include<stdio.h>

void main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year % 100 == 0){
        year % 4 == 0 ? printf("%d is a century leap year",year): printf("%d is not a leap year",year);
    }
    else{
        year % 4 == 0 ? printf("%d is a leap year",year): printf("%d is not a leap year",year);
    }
}
