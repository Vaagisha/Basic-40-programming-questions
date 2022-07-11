//check whether one string is a rotation of another
#include<stdio.h>

void main(){
    char string1[100],string2[100];
    printf("Enter the first string: ");
    gets(string1);
    printf("Enter the second string: ");
    gets(string2);
    if(strlen(string1) != strlen(string2)){
        puts(string1);
        printf(" is not a rotation of ");
        puts(string2);
    }
    else{
        int i = 0;
        while(i < strlen(string1)){
            if(string1[i] == string2[strlen(string1)-1-i]){
                i++;
            }
            else{
                puts(string1);
                printf(" is not a rotation of ");
                puts(string2);
                break;
            }
        }
        if(i == strlen(string1)){
            puts(string1);
            printf(" is a rotation of ");
            puts(string2);
        }
    }
}
