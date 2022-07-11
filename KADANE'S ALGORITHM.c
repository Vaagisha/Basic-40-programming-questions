//KADANE'S ALGORITHM
#include<stdio.h>

int maxSubarraySum(int arr[],int n){
    int max_sum = -1e9;
    int i,j;
    for(i = 0; i < n; i++){
        int current_sum = 0;
        for(j = i; j < n; j++){
            current_sum += arr[j];
            if(current_sum > max_sum){
                max_sum = current_sum;
            }
        }
    }
    return max_sum;
}

void main(){
    int array[100],n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    printf("\nMaximum sum of subarray : %d",maxSubarraySum(array,n));
}
