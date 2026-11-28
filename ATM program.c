#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000, amount;

    do
    {
        printf("\n===== ATM BANKING SYSTEM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nCurrent Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter deposit amount: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance += amount;
                    printf("Money deposited successfully!\n");
                    printf("New Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("\nEnter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else if(amount <= balance)
                {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("\nThank you for using ATM!\n");
                break;

            default:
                printf("\nInvalid Choice! Try Again.\n");
        }

    } while(choice != 4);

    return 0;
}
