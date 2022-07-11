//determine the root of the quadratic equation#inv
#include<stdio.h>
#include<math.h>

void main(){
    float a,b,c,root1,root2,result;
    printf("Enter coefficients of quadratic equation: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("\nQuadratic Equation: %.1f x^2 + %.1f x + %.1f",a,b,c);
    result = (b * b) - (4*a*c);
    if(result >= 0){
        root1 = ((-b) + sqrt(result)) / (2 * a);
        root2 = ((-b) - sqrt(result)) / (2 * a);
        printf("\nRoots are: %.2f and %.2f",root1,root2);
    }
    else{
        printf("\nQuadratic equation has no real roots");
    }
}
