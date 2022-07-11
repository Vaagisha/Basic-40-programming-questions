//merge sort
#include<stdio.h>

void mergeSort(int arr[],int low,int high){
    int mid;
    if(low < high){
        mid = (low + high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid + 1,high);
        merge(arr,low,mid,high);
    }
}

void merge(int arr[],int low,int mid,int high){
    int i = low, k = low, j = mid + 1;
    int merged_arr[50];
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            merged_arr[k] = arr[i];
            i++;
        }
        else{
            merged_arr[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i > mid){
        while(j <= high){
            merged_arr[k] = arr[j];
            k++;j++;
        }
    }
    else{
        while(i <= mid){
            merged_arr[k] = arr[i];
            k++;i++;
        }
    }
    for(i = low; i <= high; i++){
        arr[i] = merged_arr[i];
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
    mergeSort(array,0,n - 1);
    printf("\nSorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ",array[i]);
    }
}
