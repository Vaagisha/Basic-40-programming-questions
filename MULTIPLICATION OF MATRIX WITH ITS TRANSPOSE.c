//MULTIPLICATION OF MATRIX WITH ITS TRANSPOSE
#include<stdio.h>

void main(){
    int matrix[20][20],transpose[20][20],result[20][20];
    int r,c,i,j,k;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("\nEnter elements in matrix: ");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&matrix[i][j]);
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nMULTIPLICATION OF MATRIX WITH ITS TRANSPOSE:\n");
    for(i = 0; i < r; i++){
        for(k = 0; k < r; k++){
            int sum = 0;
            for(j = 0; j < c; j++){
                sum = sum + (matrix[i][j] * transpose[j][k]);
            }
            result[i][k] = sum;
            printf("%d  ",result[i][k]);
        }
        printf("\n");
    }

}
