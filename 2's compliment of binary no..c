//2's compliment of binary no.
#include<stdio.h>

void main(){
    char num[100];
    int i,j;
    printf("Enter a binary number: ");
    scanf("%s",&num);
    for(i = strlen(num) - 1; i >= 0; i--){
        if(num[i] == '1'){
            j = i;
            printf("\n%d",j);
            break;
        }
    }
    for(i = j; i >= 0; i--){
        if(num[i] == '0'){
            num[i] = '1';
        }
        else{
            if(num[i] == '1'){
                num[i] = '0';
            }
        }
    }
    printf("\n2's compliment: %s",num);

}
