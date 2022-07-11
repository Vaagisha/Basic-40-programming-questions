//STATISTICS FUNCTIONS
#include<stdio.h>

void mean(int arr[],int n){
    int result = 0;
    for(int i = 0; i < n; i++){
        result += arr[i];
    }
    printf("\nMEAN of the given observations is : %.2f",(float)result / n);
}

void mode(int arr[],int n){
    int i,j,k,l = 0,max = 0;
    for(i = 0; i < n; i++){
        int count = 0;
        for(j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(max < count){
            max = count;
            k = i;
        }
        if(count == 1){
            l++;
        }
    }
    l >= n ? printf("\nNo MODE exists for the given observations") : printf("\nMODE of the given observations is : %d",arr[k]);
}

void median(int arr[],int n){
    n % 2 == 0 ? printf("\nMEDIAN of the given observations is: %d",arr[n/2]) : printf("\nMEDIAN of the given observations is: %.1f",(float)(arr[(n - 1)/2] + arr[(n + 1)/2])/2);
}

void main(){
    int n,array[50],choice;
    printf("Enter total number of observations: ");
    scanf("%d",&n);
    printf("\nEnter observations: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    printf("\nEnter 1 for MEAN");
    printf("\nEnter 2 for MODE");
    printf("\nEnter 3 for MEDIAN");
    printf("\nEnter 4 for all the three functions");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        mean(array,n);
        break;
    case 2:
        mode(array,n);
        break;
    case 3:
        median(array,n);
        break;
    case 4:
        mean(array,n);
        mode(array,n);
        median(array,n);
        break;
    default:
        printf("\nEnter a correct choice");
        break;
    }
}
