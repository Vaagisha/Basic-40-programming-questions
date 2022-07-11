//Print and find the sum of series of 1+x+x^2+x^3........
#include<stdio.h>
#include<math.h>

void main(){
    int n,x,sum = 0,i;
    printf("Enter number of terms and value of x in series 1+x+x^2+x^3... :- ");
    scanf("%d %d",&n,&x);
    if(n == 0){
        printf("Enter correct number of terms");
    }
    else{
        printf("\nSeries is: 1");
        for(i = 1; i < n; i++){
            printf(" + x^%d",i);
        }
        for(i = 0; i < n; i++){
            sum = sum + pow(x,i);
        }
        printf("\n\nSum of series when x = %d is: %d",x,sum);
    }
}
