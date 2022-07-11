//sorting string(apple , mango,banana)=>(banana,apple,mango)
#include<stdio.h>
#include<string.h>

void main(){
    char string[10][10],result[10][10],temp;
    int n,i,j;
    printf("Enter number of strings: ");
    scanf("%d",&n);
    printf("\nEnter strings: ");
    for(i = 0; i < n; i++){
        scanf("%s",&string[i]);
    }
    i = 0;
    j = 1;
    int k = 0;
    while(j < n && i < n){
        if(strlen(string[i]) < strlen(string[j])){
            strcpy(result[k] , string[i]);
            i++;j++;
            k++;
        }
        else{
            if(strlen(string[i]) == strlen(string[j])){
                if(string[i] > string[j]){
                    strcpy(result[k] , string[i]);
                    i++;
                    j++;
                    k++;
                }
                else{
                    strcpy(result[k] , string[j]);
                    j++;
                    k++;
                }
            }
        }
    }
    printf("\nThe sorted string is: ");
    for(i = 0; i < n; i++){
        printf("%s",result[i]);
    }
}
