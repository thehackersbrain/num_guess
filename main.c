#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Guess My Number Game \n\n");
    do
    {
        printf("Enter a guess between 1 - 100: ");
        scanf("%d", &guess);
        tries++;

        if (guess > num)
        {
            printf("Too High, Try Something Lower...\n\n");
        }
        else if (guess < num)
        {
            printf("Too Low, Try Something High...\n\n");
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n", tries);
        }
    } while (guess != num);
    return 0;
}