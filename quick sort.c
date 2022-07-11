//quick sort
#include<stdio.h>

void quickSort(int arr[],int low,int high){

    if(low < high){
        int i = low ,j = i + 1;
        while(j <= high){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;j++;
            }
            else{
                i = j;
                j++;
            }
        }
        quickSort(arr,low,i - 1);
        quickSort(arr,i + 1,high);
    }
}

void main(){
    int array[50],n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements in array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    quickSort(array,0,n - 1);
    printf("\nSorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ",array[i]);
    }
}
