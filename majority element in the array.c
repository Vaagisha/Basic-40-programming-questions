//majority element in the array
#include<stdio.h>

void main(){
    int n,array[100],i,j;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("\nEnter elements in array: ");
    for(i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    for(i = 0; i < n; i++){
        int count = 0;
        for(j = 0 ; j < n; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        if(count >= n / 2){
            printf("\n%d is majority element",array[i]);
            break;
        }
        if(count < n / 2 && i == n - 1){
            printf("\nThere is no majority element present in array");
        }
    }
}
