//whether a character is a alphabet or not
#include<stdio.h>

void main(){
    char ch;
    printf("\nEnter a character:");
    scanf("%c",&ch);
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
        printf("The given character \"%c\" is an alphabet",ch);
    }
    else{
        printf("The given character \"%c\" is not an alphabet",ch);
    }
}
