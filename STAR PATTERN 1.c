//STAR PATTERN 1
#include<stdio.h>

void main(){
    int i ,j,k,l;
    for(i = 0; i < 4; i++){
        for(j = 3; j >= i; j--){
            printf(" ");
        }
        for(k = 0; k <= i ; k++){
            printf("*");
        }
        for(l = 4; l - 4 < i; l++){
            printf("*");
        }
        printf("\n");
    }
}
