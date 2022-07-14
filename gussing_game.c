#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, count = 1;
    srand(time(NULL));
    number = rand() % 100 + 1; // generating random number between 1 and 100

    printf("Guess a number between 1 to 100\n");
    do
    {

        scanf("%d", &guess);

        if (guess > number)
        {
            printf("!!The number is smaller!!\n");
        }
        else if (guess < number)
        {
            printf("!!The number is greater!!\n");
        }
        else
        {
            printf("** Congratulation, You guessed the number in %d attempts", count);
        }
        count++;
    } while (number != guess);

    return 0;
}