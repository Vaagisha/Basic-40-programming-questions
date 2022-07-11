//structure implementation
#include<stdio.h>
#include<conio.h>
#include<windows.h>


struct student{
    char name[30];
    int roll_no;
    int age;
};

struct student s[50];

void main(){
    int n,r,i,j;
    printf("Number of enteries: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("\nEnter name of student: ");
        scanf("%s",&s[i].name);
        printf("\nEnter roll number of student: ");
        scanf("%d",&s[i].roll_no);
        printf("\nEnter age of student: ");
        scanf("%d",&s[i].age);
    }
    system("cls");
    printf("\nEnter the roll number to get the details:");
    scanf("%d",&r);
    for(i = 0; i < n; i++){
        if(s[i].roll_no == r){
            j = i;
        }
    }
    printf("\nDetails of roll number %d:",r);
    printf("\nName of student: %s",s[j].name);
    printf("\nRoll number of student: %d",s[j].roll_no);
    printf("\nAge of student: %d",s[j].age);
}
