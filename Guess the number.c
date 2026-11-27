#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret, guess;
    int attempts = 0;

    srand(time(0));

    secret = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess a number between 1 and 100\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret)
        {
            printf("Too High! Try Again.\n");
        }
        else if (guess < secret)
        {
            printf("Too Low! Try Again.\n");
        }
        else
        {
            printf("\nCongratulations! You won!\n");
            printf("Correct Number: %d\n", secret);
            printf("Total Attempts: %d\n", attempts);
        }

    } while (guess != secret);

    return 0;
}
