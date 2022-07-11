//Merge 2 sorted arrays
#include<stdio.h>

void main(){
    int arr1[] = {2,4,13,26,45,56,78};
    int arr2[] = {1,4,5,17,25,67};
    int n1,n2,n3;
    n1 = sizeof(arr1) / sizeof(int);
    n2 = sizeof(arr2) / sizeof(int);
    n3 = n1 + n2;
    int i = 0, j = 0, k = 0, arr3[n3];
    printf("Given two sorted arrays: [2,4,13,26,45,56,78] and [1,4,5,17,25,67]");
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    if(i >= n1 && k < n3){
        arr3[k] = arr2[j];
        k++;j++;
    }
    if(j >= n2 && k < n3){
        arr3[k] = arr1[i];
        k++;i++;
    }
    printf("\nMerged array : ");
    for(i = 0; i < n3; i++){
        printf("%d ",arr3[i]);
    }
}
