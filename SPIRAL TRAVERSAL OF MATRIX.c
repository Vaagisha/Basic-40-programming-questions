//SPIRAL TRAVERSAL OF MATRIX
#include<stdio.h>

void main(){
    int matrix[20][20];
    int i,j,r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("\nEnter elements in matrix: ");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    int direction = 0;
    printf("\nOn spiral traversing of the matrix we get: ");
    while(top <= bottom && left <= right){
        if(direction == 0){
            for(i = left; i <= right; i++){
                printf("%d ",matrix[top][i]);
            }
            top++;
        }
        else if(direction == 1){
            for(i = top; i <= bottom; i++){
                printf("%d ",matrix[i][right]);
            }
            right--;
        }
        else if(direction == 2){
            for(i = right; i >= left; i--){
                printf("%d ",matrix[bottom][i]);
            }
            bottom--;
        }
        else if(direction == 3){
            for(i = bottom; i >= top; i--){
                printf("%d ",matrix[i][left]);
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}
