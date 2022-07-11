//Print all the permutations of the given string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char string[],int start,int end){
    if(start == end){
        printf("%s\n",string);
    }
    else{
        for(int i = start; i <= end; i++){
            swap(&string[start],&string[i]);
            permute(string,start+1,end);
            swap(&string[start],&string[i]);
        }
    }
}

void main(){
    char string[50];
    printf("Enter a string: ");
    scanf("%s",&string);
    permute(string,0,strlen(string) - 1);
}
