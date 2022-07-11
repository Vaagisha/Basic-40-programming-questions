//Internal Varsity Number Square Printing
#include<stdio.h>

void main(){
    int i,j,k = 1;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            if((j == 0 || j == 2)||(i == 0)){
                printf("3 ");
            }
            else{
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}
