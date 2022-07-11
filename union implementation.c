//union implementation
#include<stdio.h>

union pack{
    char a;
    int b;
    float c;
};

void main(){
    union pack p;
    printf("Size of union : %ld",sizeof(p));

    printf("\nEnter a character: ");
    scanf("%c",&p.a);
    printf("A: %c",p.a);

    printf("\nEnter an integer: ");
    scanf("%d",&p.b);
    printf("B: %d",p.b);

    printf("\nEnter a float: ");
    scanf("%f",&p.c);
    printf("C: %f",p.c);

    printf("\nOn printing together the values:-");
    printf("\nA: %c, B: %d, C: %f",p.a,p.b,p.c);
}
