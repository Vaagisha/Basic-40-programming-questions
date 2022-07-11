//LINEAR SEARCH
#include<stdio.h>

void main(){

    int arr[] = {3,5,21,54,7,89,34,23,9,6};
    int num,i;
    printf("\nEnter the element you want to search in an array:");
    scanf("%d",&num);
    int length = sizeof(arr)/sizeof(int);
    for(i = 0; i < length; i++){
        if(arr[i] == num){
            printf("\nThe number is present in array at index %d",i);
            break;
        }
    }
    if(i >= length){
        printf("\nThe number is not present in array");
    }
}
