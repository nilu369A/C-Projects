#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//stdlib.h and time.h header files are included, which provide the necessary functions for random number generation, and time functions respectively.

int main()
{

        int n;
        int random_num, n_guesses = 0;

        // Seed the random number generator with the current time

        srand(time(NULL));

        // Generate a random number between 1 & 100

        random_num = rand() % 100 + 1;

        do
        {
                printf("Enter a number between 1 & 100. \n");
                scanf("%d", &n);
                
                //Ask the user to enter a number and read it from standard input using scanf()

                if (random_num > n)
                {
                        printf("%d is smaller than expected. Enter a greater value. \n", n);
                }
                else if (random_num < n)
                {
                        printf("%d is greater than expected. Enter a smaller number. \n", n);
                }
                else
                {
                        printf("Congratulations,You have guessed the right number succesfully. \n");
                }
                
                //Check if the user's guess is higher or lower than the randomly generated number and print an appropriate message
                
                n_guesses++; 
                
                //Increment the number of guesses made

        } while (random_num != n);
        
        //Repeat the loop until the user's guess matches the randomly generated number

        return 0;
}