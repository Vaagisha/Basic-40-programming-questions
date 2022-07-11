//LCM
#include<stdio.h>

void main(){
    int num1, num2, result;
    printf("Enter any two numbers:");
    scanf("%d %d",&num1,&num2);
    result = (num1 * num2) / HCF(num1,num2);
    printf("\nLCM of %d and %d is: %d",num1,num2,result);
}


int HCF(n1,n2){
    int small;
    if(n1 - n2 > 0){
        small = n2;
    }
    else{
        small = n1;
    }
    for(int i = small; i >= 1; i--){
        if(n1 % i == 0 && n2 % i == 0){
            return i;
        }
    }

}
