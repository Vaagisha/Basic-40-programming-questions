//SORTING 3D ARRAY
#include<stdio.h>

void sort(int a[],int n){
    int i = 0;
    while(i < n){
        int  j = i + 1;
        while(j < n){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
        i++;
    }
}

void main(){
    int array[50][50][50];
    int x,y,z,i,j,k;
    printf("Enter x,y,z: ");
    scanf("%d %d %d",&x,&y,&z);
    int single_array[x*y*z];
    int l = 0;
    printf("Enter elements in 3-D array: ");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            for(k = 0; k < z; k++){
                scanf("%d",&array[i][j][k]);
                single_array[l] = array[i][j][k];
                l++;
            }
        }
    }
    sort(single_array,x*y*z);
    l = 0;
    printf("\nSorted 3-D array:\n");
     for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            for(k = 0; k < z; k++){
                array[i][j][k] = single_array[l];
                l++;
                printf("%d ",array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
