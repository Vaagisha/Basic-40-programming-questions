//Inverted Right Triangle Number Printing
#include<stdio.h>

void main(){
    int i ,j, k=10;
    for(i = 0; i < 4; i++){
        for(j = 4; j >i; j--){
            printf("%d ",k--);
        }
        printf("\n");
    }
}
