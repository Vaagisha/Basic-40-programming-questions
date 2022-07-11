//Capitalize the first and last character of each word of a string
#include<stdio.h>

void main(){
    char string[20];
    int i = 0;
    printf("Enter a string:");
    scanf("%s",&string);
    if((string[0] >= 97 && string[0] <= 122 )){
        string[0] -= 32;
    }
    if((string[strlen(string) - 1] >= 97 && string[strlen(string) - 1] <= 122)){
        string[strlen(string) - 1] -= 32;
    }
    printf("\nNew string is:%s",string);
}
