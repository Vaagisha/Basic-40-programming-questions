//ENCRYPTION DECRYPTION
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void encryption(char text[]){
    int i;
    for(i = 0; i < strlen(text); i+=2){
        if(text[i] != ' ' && text[i] != ',' && text[i] != '.'){
            int ch = text[i];
            if(ch < 91 && ch > 64)
                text[i] = ((ch - 65 + 5) % 26) + 65;
        }
    }
}

void decryption(char text[]){
    int i;
    for(i = 0; i < strlen(text); i+=2){
            int ch = text[i];
            if(ch < 91 && ch > 64)
                text[i] = ((ch + 65 - 5) % 26) + 65;
        }
}

void main(){
    FILE *fp;
    fp = fopen("C:\\file2.txt","r");
    char buffer[2000];
    fread(&buffer,sizeof(char),2000,fp);
    printf("Length of buffer: %d\n",strlen(buffer));
    encryption(strupr(buffer));
    printf("Encrypted Text:\n");
    puts(buffer);
    printf("Decrypted Text:\n");
    decryption(buffer);
    puts(buffer);
}
