//MULTISORTING
#include<stdio.h>

struct student_details{
    int roll_no;
    char name[50];
    int age;
};

void sort(struct student_details a[],char choice,int n){
    int i = 0;
    while(i < n){
        int  j = i + 1;
        while(j < n){
            if(a[i].roll_no > a[j].roll_no && choice == 'r'){
                struct student_details temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if(a[i].name > a[j].name && choice == 'n'){
                struct student_details temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if(a[i].age > a[j].age && choice == 'a'){
                struct student_details temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
        i++;
    }
}

void main(){
    int i ,n,choice;
    struct student_details s[50];
    printf("Number of enteries: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        printf("\nEnter roll number of student: ");
        scanf("%d",&s[i].roll_no);
        printf("\nEnter name of student: ");
        scanf("%s",&s[i].name);
        printf("\nEnter age of student: ");
        scanf("%d",&s[i].age);
    }
    printf("\nEnter 1 for roll number wise sorting");
    printf("\nEnter 2 for name wise sorting");
    printf("\nEnter 3 for age wise sorting");
    printf("\nYour choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        sort(s,'r',n);
        break;
    case 2:
        sort(s,'n',n);
        break;
    case 3:
        sort(s,'a',n);
        break;
    default:
        printf("\nEnter correct choice");
        break;
    }
    for(i = 0; i < n; i++){
        printf("\nROLL NUMBER: %d NAME: %s AGE: %d",s[i].roll_no,s[i].name,s[i].age);
    }
}
