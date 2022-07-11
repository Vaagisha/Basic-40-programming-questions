//Common elements in all rows of a given matrix
#include<stdio.h>

void main(){
    int matrix[50][50];
    int r,c,i,j,k = 0,l = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("\nEnter elements in matrix: ");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nCommon elements in all rows of a given matrix: ");
    for(k = 0; k < c; k++){
        int count = 1;
        for(i = 1; i < r; i++){
            for(j = 0; j < c; j++){
                if(matrix[i][j] == matrix[0][k]){
                    count++;
                    break;
                }
            }
        }
        if(count >= r){
            printf("%d , ",matrix[0][k]);
        }
        else{
            l++;
        }
    }
    if(l > c - 1){
        printf("No common element is present");
    }
}
