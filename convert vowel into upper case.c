//convert vowel into upper case
#include<stdio.h>

void main(){
    char string[40];
    printf("Enter a string:");
    scanf("%s",&string);
    for(int i = 0; i< strlen(string); i++){
        if(string[i] == 'a' || string[i] == 'e'||string[i] == 'i' || string[i] == 'o'||string[i] == 'u'){
            string[i] -= 32;
        }
    }
    printf("\nNew string: %s",string);
}
