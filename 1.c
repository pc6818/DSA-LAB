#include <stdio.h>

int acc_num,acc_balance=0;

void acc_details(){
    printf("Enter your account number: ");
    scanf("%d",&acc_num);
};

void deposit(){
    int amt;
    printf("Enter the amount to be deposited: ");
    scanf("%d",&amt);
    acc_balance += amt;
};

void withdraw(){
    int amt;
    printf("Enter the amount to be withdrawn: ");
    scanf("%d",&amt);
    if (amt <= acc_balance){
        acc_balance -= amt;
        printf("Amount has been withdrawn.\n");
    }
    else{
        printf("Insufficient Balance.\n");
    }
};

void balance(){
    printf("Account number: %d\nBalance: %d",acc_num,acc_balance);
}

int main(){
    acc_details();
    int choice=0;
    do{
        printf("\t\nMenu:\n1.Deposit\n2.Withdraw\n3.Check balance\n4.Exit\nEnter your choice: ");
        scanf("%d",&choice);
        if (choice==1){
            deposit();
        }
        else if (choice==2){
            withdraw();
        }
        else if (choice==3){
            balance();
        }
        else if (choice!=4){
            printf("Invalid choice.");
        }
    }while(choice!=4);
}
