#include <stdio.h>

int main() {
    int pin = 1234;
    int balance = 5000;
    int option, enteredPin, withdrawAmount, depositAmount;

    printf("Welcome to the ATM Simulator!\n");

    while (1) {
        printf("\nPlease enter your PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin != pin) {
            printf("Invalid PIN. Please try again.\n");
            continue;
        }

        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Your current balance is: $%d\n", balance);
                break;
            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%d", &withdrawAmount);
                if (withdrawAmount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= withdrawAmount;
                    printf("Withdrawal successful. Remaining balance is: $%d\n", balance);
                }
                break;
            case 3:
                printf("Enter the amount to deposit: ");
                scanf("%d", &depositAmount);
                balance += depositAmount;
                printf("Deposit successful. Updated balance is: $%d\n", balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}