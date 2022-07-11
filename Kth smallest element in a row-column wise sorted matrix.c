//Kth smallest element in a row-column wise sorted matrix
#include<stdio.h>

void main(){
    int matrix[30][30];
    int r, c, i, j, k, count = 0,result;
    printf("Number of rows and columns in the matrix: ");
    scanf("%d %d",&r,&c);
    printf("\nEnter the value of K: ");
    scanf("%d",&k);
    printf("\nEnter elements in matrix in sorted order: ");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&matrix[i][j]);
            count++;
            if(count == k){
                result = matrix[i][j];
                break;
            }
        }
    }
    printf("%d is the %dth smallest element",result,k);
}
