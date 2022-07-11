//MAXIMUM PRODUCT SUBARRAY
#include<stdio.h>

int maxSubarrayProduct(int arr[],int n){
    int max_product = -1e9;
    int i,j;
    for(i = 0; i < n; i++){
        int current_product = 1;
        for(j = i; j < n; j++){
            current_product *= arr[j];
            if(current_product > max_product){
                max_product = current_product;
            }
        }
    }
    return max_product;
}

void main(){
    int array[100],n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    printf("\nMaximum sum of subarray : %d",maxSubarrayProduct(array,n));
}
