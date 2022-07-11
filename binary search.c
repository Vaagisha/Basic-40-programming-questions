//binary search
#include<stdio.h>

int binarySearch(int arr[],int low,int high,int num){
    int mid;
    if(low < high){
        mid = (low + high) / 2;
        if(num == arr[mid]){
            return 1;
        }
        else{
            num < arr[mid] ? binarySearch(arr,low,mid,num): binarySearch(arr,mid + 1,high,num);
        }
    }
    return 0;
}
void main(){
    int array[50],n,num;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements in array (must be a sorted array): ");
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    printf("\nEnter element you want to search: ");
    scanf("%d",&num);
    binarySearch(array,0,n - 1,num) ? printf("\nThe element %d is present in array",num): printf("\nThe element %d is not present in array",num);
}
