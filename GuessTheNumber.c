#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guessCount = 0;
    int answer;

    printf("Guess the number (1-100)\n");

    srand(time(0));

    answer = rand() % MAX + MIN;

    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else{
            printf("Correct!\n");
        }
        guessCount ++;
    }
    while (guess != answer);

    printf("Answer: %d\n", answer);
    printf("Number of guesses: %d\n", guessCount);

    return 0;
}