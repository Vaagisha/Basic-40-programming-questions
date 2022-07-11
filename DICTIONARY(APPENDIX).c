//DICTIONARY(APPENDIX)
#include<stdio.h>
#include<stdlib.h>

struct appendix{
    char input[50];
    int n;
};

void main(){
    FILE *fp;
    int i = 0, num;
    struct appendix a[50];
    fp = fopen("C:\\file2.txt","r");
    char buffer[2000],input;
    fread(&buffer,sizeof(char),2000,fp);
    printf("\nNumber of words you want to find the appendix of: ");
    scanf("%d",&num);
    for(i = 0; i < num; i++){
        printf("\n\nEnter words: ");
        scanf("%s",a[i].input);
        int j = 0,k = 0, count = 0;
        while(k < strlen(buffer) && j < strlen(a[i].input)){
            if(toupper(buffer[k]) == toupper(a[i].input[j])){
                k++;j++;
            }
            else{
                k++;
                j = 0;
            }
            if(j >= strlen(a[i].input)){
                count++;
            //exit(0);
                j = 0;
            }
        }
        a[i].n = count;
        printf("\nWORD: %s  COUNT: %d",a[i].input,a[i].n);
    }
}
