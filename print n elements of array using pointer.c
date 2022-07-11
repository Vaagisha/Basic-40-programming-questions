//print n elements of array using pointer
#include<stdio.h>

void main(){
    int array[50],n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements in array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    int *p;
    p = &array;
    printf("\nArray: ");
    while(p <= &array[n - 1]){
        printf("%d ",*p);
        p++;
    }
}
