//reverse the digits of a number using pointers
#include<stdio.h>
#include<string.h>

void main(){
    char number[50],temp;
    int i;
    printf("Enter a number: ");
    scanf("%s",&number);
    char *p, *q;
    p = number;
    q = &number[strlen(number) - 1];
    while(p < &number[strlen(number) / 2]){
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;

    }
    printf("\nReverse number : %s",number);
}
