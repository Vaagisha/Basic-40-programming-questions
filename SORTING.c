//SORTING
#include<stdio.h>

void main(){
    int arr[100], i,j,temp,no_elements;
    printf("Number of elements in array:");
    scanf("%d",&no_elements);
    printf("\nEnter elements in array:");
    for(i = 0; i < no_elements; i++){
        scanf("%d",&arr[i]);
    }
    i=0;
    j = 1;
    while(i < no_elements){
        while(j < no_elements){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
            j++;
        }
        i++;
        j = i + 1;
    }
    printf("\nThe sorted array is:");
    for(i = 0; i < no_elements; i++){
        printf("%d ",arr[i]);
    }
}
