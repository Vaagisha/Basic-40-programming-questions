//circular left shift
#include<stdio.h>

void main(){
    int array[100],result[100],i,j,n;
    printf("Number of elements in array: ");
    scanf("%d",&n);
    printf("\nEnter elements in array: ");
    for(i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    printf("Given Array: %d",array[0]);
    for(i = 1; i < n; i++){
        printf(", %d",array[i]);
    }
    printf("\nArray after circular left shift: ");
    for(i = 1; i < n; i++){
        result[i - 1] = array[i];
        printf("%d , ",result[i - 1]);
    }
    result[n] = array[0];
    printf("%d",result[n]);
}
