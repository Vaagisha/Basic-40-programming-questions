//FACTOR OF A NUMBER
#include<stdio.h>

void main(){
    int num, i;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\nFactors of %d are:1",num);
    for(i = 2; i<=num; i++){
        if(num % i == 0){
            printf(", %d",i);
        }
    }
}
