// Basic calculator using conditional instructions

#include <stdio.h>

int main()
{
        int choice;
        double num1, num2, result;

        do
        {
                printf("Menu:\n");
                printf("1)Addition\n");
                printf("2)Substraction\n");
                printf("3)multiplication\n");
                printf("4)Division\n");
                printf("5)Exit\n");
                printf("Enter your choice:\n");
                scanf("%d", &choice); // Read user's choice

                if (choice >= 1 && choice <= 4) // Check the choice
                {
                        printf("Enter two number:\n");
                        scanf("%lf%lf", &num1, &num2);

                        if (choice == 1)
                        {
                                result = num1 + num2;
                        }
                        else if (choice == 2)
                        {
                                result = num1 - num2;
                        }
                        else if (choice == 3)
                        {
                                result = num1 * num2;
                        }
                        else if (choice == 4)
                        {
                                if (num2 != 0)
                                {
                                        result = num1 / num2;
                                }
                                else
                                {
                                        printf("Error, Division by zero!\n"); // Handle division by zero
                                        continue;                             // Skip to the next loop
                                }
                        }

                        printf("Result is %.2f\n", result); // Display the result
                }
                else if (choice == 5)
                {
                        printf("Exiting this program."); // Exit the program
                }
                else
                {
                        printf("Invalid choice ,Enter a valide choice.\n"); // Handle invalid choice
                }

        } while (choice != 5); // Repeat untill the user want to exit

        return 0;
}