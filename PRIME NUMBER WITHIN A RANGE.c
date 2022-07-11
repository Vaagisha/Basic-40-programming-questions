//PRIME NUMBER WITHIN A RANGE
#include<stdio.h>

void main(){
    int lower_bound, upper_bound, i;
    printf("Enter a range in between you want to print the prime numbers-\n");
    printf("\nEnter a lower bound:");
    scanf("%d",&lower_bound);
    printf("\nEnter a upper bound:");
    scanf("%d",&upper_bound);
    for(i = lower_bound + 1; i < upper_bound; i++){
        int count = 0;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 0){
            printf("\n%d",i);
        }
    }

}
