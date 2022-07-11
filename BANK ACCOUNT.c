//BANK ACCOUNT
#include<stdio.h>
double amount;

void withdrawl(){
    double withdraw;
    printf("\nEnter the amount you want to withdraw: ");
    scanf("%lf",&withdraw);
    if(withdraw > amount){
        printf("\nYou can't withdraw\nNot sufficient bank balance");
    }
    else{
        amount = amount - withdraw;
        printf("\n%lf amount is withdrawn\nYour bank balance is: %lf",withdraw,amount);
    }
}

void deposit(){
    double deposit;
    printf("\nEnter amount you want to deposit: ");
    scanf("%lf",&deposit);
    amount = amount + deposit;
    printf("\n%lf amount is deposited\nYour bank balance is: %lf",deposit,amount);
}

void interest(){
    double p;
    float r = 6.0,t;
    double result;
    printf("\nEnter principal amount and time period in years: ");
    scanf("%lf %f",&p,&t);
    result = p * (double)pow(1 + (r / 100),t);
    printf("\nAmount you will receive in %.1f years at the rate of %.1f % is : %lf",t,r,result);
}

void main(){
    int choice,a = 1;
    printf("Enter your total balance: ");
    scanf("%lf",&amount);
    while(a){
        printf("\nEnter 1 for withdrawl");
        printf("\nEnter 2 for deposit");
        printf("\nEnter 3 for interest");
        printf("\nEnter 4 to check bank balance");
        printf("\nEnter 5 to End");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            withdrawl();
            break;
        case 2:
            deposit();
            break;
        case 3:
            interest();
            break;
        case 4:
            printf("\nBank Balance : %lf",amount);
            break;
        case 5:
            a = 0;
            break;
        default:
            printf("Enter correct choice");
            break;
        }
    }
}
