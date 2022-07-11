//UNIT CONVERSION
#include<stdio.h>

void toInch(float num){
    printf("\n%.2f feet is %.2f inches",num,12 * num);
}

void toCm(float num){
    printf("\n%.2f feet is %.2f cm",num,30.48 * num);
}

void toMeter(float num){
    printf("\n%.2f feet is %.4f m",num,.3048 * num);
}

void toMile(float num){
    printf("\n%.2f feet is %.6f mile",num,.00019 * num);
}

void toYard(float num){
    printf("\n%.2f feet is %.6f yard",num,.33333 * num);
}

void main(){
    int choice;
    float num;
    printf("FEET CONVERSION");
    printf("\nEnter the number: ");
    scanf("%f",&num);
    printf("\nEnter 1 for conversion to inch");
    printf("\nEnter 2 for conversion to centimeter");
    printf("\nEnter 3 for conversion to meter");
    printf("\nEnter 4 for conversion to mile");
    printf("\nEnter 5 for conversion to yard");
    printf("\nEnter the choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        toInch(num);
        break;
    case 2:
        toCm(num);
        break;
    case 3:
        toMeter(num);
        break;
    case 4:
        toMile(num);
        break;
    case 5:
        toYard(num);
        break;
    default:
        printf("\nEnter correct choice");
        break;
    }

}
