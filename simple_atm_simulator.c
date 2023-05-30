// a program to Create a simple ATM simulator program that allows users to perform basic banking operations such as balance inquiry, deposit, and withdrawal
#include <stdio.h>

int main()
{
    int pin = 1234; // Default PiN
    int account_number = 7483264832;
    char holder_name[] = "Nirmalya Adak";
    float balance = 1000; // Default balance
    int choice, entered_pin;
    float deposite_amount, withdrawal_amount, updated_balance_deposite, updated_balance_withdrawal;

    printf("Welcome to the Simple ATM Simulator!\n");
    printf("Enter your pin: ");
    scanf("%d", &entered_pin);

    if (entered_pin == pin) // PIN verification
    {
        printf("\nAccount Number : %d\n", account_number);
        printf("Account Holder Name : %s\n", holder_name);
        printf("Balance : $%.2f\n", balance);

        printf("\nMenu:\n");
        printf("1.Balance Inquiry\n");
        printf("2.Deposite\n");
        printf("3.Withdrawal\n");
        printf("4.Exit\n");
        printf("\nEnter your choice:\n");
        scanf("%d", &choice);
        
        if (choice == 1)
        {
            printf("\nCurrent balance: $%.2f\n", balance);
        }
        else if (choice == 2)
        {
            printf("Enter the deposite amount: $");
            scanf("%f", &deposite_amount);
            updated_balance_deposite = balance + deposite_amount;
            printf("Deposite successful. Your updated balance is: $%.2f\n", updated_balance_deposite);
        }
        else if (choice == 3)
        {
            printf("Enter withdrawal amount: $");
            scanf("%f", &withdrawal_amount);
            updated_balance_withdrawal = balance - withdrawal_amount;
            if (balance < withdrawal_amount)
            {
                printf("Insufficient balance!\n");
            }
            else
            {
                printf("Withdrawal successful. Your updated balance is $%.2f\n", updated_balance_withdrawal);
            }
        }
        else if (choice == 4)
        {
            printf("Exit!\n");
        }
        else
        {
            printf("Enter a valid choice.\n");
        }
    }
    else
    {
        printf("Incorrect PIN. Access denied!");
    }
    return 0;
}