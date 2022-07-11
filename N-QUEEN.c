//N-QUEEN
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
int n;
bool check( int row, int col,int board[n][n]){

    int i, j;
    //for column
    for (i=0;i<row;i++){
        if(board[i][col]==1){
            return false;
        }
    }
    //for left diagonal
    i=row;
    j=col;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
    i=row;
    j=col;
    // for right upper diagonal
     while(i>=0 && j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;
    }
    return true;
}

bool NQueen(int row, int board[][n]){
    if(row >= n){
        for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j])
                printf("Q ");
            else
                printf("- ");
        }
        printf("\n");
    }
        return true;
    }
    for(int col = 0; col < n; col++){
        if(check(row, col,board)){
            board[row][col] = 1;
            if(NQueen(row + 1, board)){
                return true;
            }
            board[row][col] = 0;
        }

    }
    return false;
}

void main(){
    printf("Enter number of queens: ");
    scanf("%d",&n);
    int row = n, col = n;
    int board[50][50];
    //int **board = new int*[row];
    for(int i = 0; i < row; i++){
        //board[i] = new int[col];
        for(int j=0;j<col;j++){
            board[i][j]=0;
        }
    }
    if(!NQueen(0,board)){
        printf("\nNo solution exist!");
    }
}
