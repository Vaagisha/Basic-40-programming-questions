//Alphabet pattern
#include<stdio.h>

void main(){
    char i;
    char j;
    for(i = 70; i >= 65; i--){
        for(j = 70; j >= i; j--){
            printf("%c",j);
        }
        printf("\n");
    }
}
