// a program that evaluates the strength of a password entered by the user based on predefined criteria

#include <stdio.h>

int main()
{

        char password;
        int containsInteger = 0;     // Flag to indicate if the password contains an integer
        int containsSpecialchar = 0; // Flag to indicate if the password contains a special character
        int length = 0;

        printf("Strength level:\n"); 
        printf("Level-1 : Very Weak\n");
        printf("Level-2 : Weak\n");
        printf("Level-3 : Strong\n");
        printf("Level-4 : Very Strong\n");
        printf("Level-5 : Very much strong\n");

        printf("Enter your password : \n");
        scanf("%c", &password); // Read the first character of the password

        // Logic of this below while loop is been created by chatGpt

        while ((password = getchar()) != ' ' && password != '\n')
        {
                if (password >= '0' && password <= '9')
                {
                        containsInteger = 1; // Set the containsInteger flag if the character is a digit
                }
                if (!(password >= 'A' && password <= 'Z') && !(password >= 'a' && password <= 'z') && !(password >= '0' && password <= '9'))
                {
                        containsSpecialchar = 1; // Set the containsSpecialchar flag if the character is not an uppercase letter, lowercase letter, or digit
                }
                if (password != '\n')
                {
                        length++; // Increment the length for each character, excluding the newline character
                }
        }

        if (length < 6)
        {
                printf("Level-1");
        }
        else if (length < 6 && (containsInteger || containsSpecialchar))
        {
                printf("Level-2");
        }
        else if (length >= 6 && length <= 10 && (containsInteger && containsSpecialchar))
        {
                printf("Level-3");
        }
        else if (length >= 10 && length <= 12 && containsInteger && containsSpecialchar)
        {
                printf("Level-4");
        }
        else if (length > 12 && containsInteger && containsSpecialchar)
        {
                printf("Level-5");
        }

        return 0;
}