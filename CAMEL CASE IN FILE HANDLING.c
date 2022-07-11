//CAMEL CASE IN FILE HANDLING
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

void main(){
    FILE *fp;
    int i = 0;
    char buffer[2000];
    fp = fopen("C:\\file1.txt","r");
    if(fp == NULL){
        printf("Error opening file");
        exit(1);
    }

    fread(&buffer,sizeof(char),2000,fp);

    while(i < strlen(buffer)){
        if(buffer[i] == ' '){
            buffer[i + 1] = toupper(buffer[i + 1]);
        }
        //buffer[i] = buffer[i + 1];
        i++;
    }
    buffer[0] = tolower(buffer[0]);
    for(i = 0 ; i < strlen(buffer); i++){
        if(buffer[i] != ' '){
            printf("%c",buffer[i]);
        }
    }
}
