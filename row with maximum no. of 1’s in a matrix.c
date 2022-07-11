//row with maximum no. of 1’s in a matrix
#include<stdio.h>

void main(){
    int array[50][50],total_count[50];
    int r, c, i, j, count = 0;
    printf("Enter number of rows and columns in the matrix: ");
    scanf("%d %d",&r,&c);
    printf("\nEnter elements in matrix: ");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&array[i][j]);
            if(array[i][j] == 1){
                count++;
            }
        }
        total_count[i] = count;
    }
    int max = total_count[0];
    j = 0;
    for(i = 0; i < r; i++){
        if(total_count[i] > max && total_count[i] != 0){
            max = total_count[i];
            j = i;
        }
    }
    total_count[j] == 0 ? printf("\nThere is no such row"):printf("\nThe row with maximum number of 1's is : %d",j);

}
