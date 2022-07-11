//MULTISEARCHING
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    FILE *fp;
    char buffer[1500],input[1500];
    fp = fopen("C:\\file1.txt","r");
    if(fp == NULL){
        printf("Error opening file");
        exit(1);
    }

    fread(&buffer, sizeof(char), 1500, fp);

    //fgets(buffer,1500,fp);
    //fscanf(fp - 1,"%s",buffer);
   /* printf("paragraph given is:\n");
    while(fscanf(fp - 1,"%s",buffer)!= NULL){
      if(fgets(buffer,1500,fp)!= NULL){
        //strcpy(result,buffer);
        puts(buffer);
      }
    }*/
    //strcpy(result,buffer);
    puts(buffer);
    printf("\nEnter the string: ");
    gets(input);
    int i = 0,j = 0, count = 0;
    while(i < strlen(buffer) && j < strlen(input)){
        if(buffer[i] == input[j]){
            i++;j++;
        }
        else{
            i++;
            j = 0;
        }
        if(j >= strlen(input)){
            printf("\nMatch found at index %d",i - strlen(input));
            count++;
            //exit(0);
            j = 0;
        }
    }
    if(count == 0){
        printf("\nNo match found");
    }
    fclose(fp);
}
