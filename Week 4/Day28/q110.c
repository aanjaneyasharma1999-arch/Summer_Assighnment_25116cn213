#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {

    struct Account acc;
    int choice;
    float amount;

    printf("Create New Account\n");

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do {

        printf("\n========== BANK ACCOUNT SYSTEM ==========\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:

            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            acc.balance += amount;

            printf("Amount Deposited Successfully.\n");

            break;

        case 2:

            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if(amount <= acc.balance) {

                acc.balance -= amount;

                printf("Amount Withdrawn Successfully.\n");

            } else {

                printf("Insufficient Balance.\n");

            }

            break;

        case 3:

            printf("\nCurrent Balance = %.2f\n", acc.balance);

            break;

        case 4:

            printf("\n----- Account Details -----\n");

            printf("Account Number : %d\n", acc.accNo);
            printf("Account Holder : %s\n", acc.name);
            printf("Balance        : %.2f\n", acc.balance);

            break;

        case 5:

            printf("\nThank You for Using Our Bank.\n");

            break;

        default:

            printf("\nInvalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}
