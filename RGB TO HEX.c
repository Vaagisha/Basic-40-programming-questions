//RGB TO HEX
#include<stdio.h>
#include<string.h>

void decimalToHex(int num){
    int remainder,i = 0;
    char result[50];
    while(num > 0){
        remainder = num % 16;
        if(remainder < 10){
            result[i] = remainder + 48;
        }
        else{
            result[i] = remainder + 55;
        }
        i++;
        num /= 16;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%c",result[j]);
    }
}

void main(){
    int r,g,b,j;
    char result[50];
    printf("Enter value of RED,GREEN,BLUE (in between 0 to 255): ");
    scanf("%d %d %d",&r,&g,&b);
    printf("HEX value for given rgb is: ");
    decimalToHex(r);
    decimalToHex(g);
    decimalToHex(b);
}
