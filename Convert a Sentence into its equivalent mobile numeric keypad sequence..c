//Convert a Sentence into its equivalent mobile numeric keypad sequence
#include<stdio.h>
#include<string.h>

void main(){
    char string[30][5] = {"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
    int i, diff;
    char input_string[1000];
    printf("Enter input string: ");
    gets(input_string);
    printf("\nEquivalent mobile numeric keypad sequence: ");
    for(i = 0; i < strlen(input_string); i++){
        if(input_string[i] == ' '){
            printf("0");
        }
        else{
            diff = strlwr(input_string)[i] - 'a';
            printf("%s",string[diff]);
        }
    }
}
