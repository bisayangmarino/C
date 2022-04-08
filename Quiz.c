#include <ctype.h>
#include <stdio.h>


int main(void)
{
    char questions[][100] = {"1. What is the closest star to our planet?: ",
                             "2. How many days in a year?: ",
                             "3. Which country does K-Pop originated?: ",
                             "4. Who is the considered as the father of Astronomy?: ",
                             "5. Fill-in the blank: It is raining ____ today"};
    
    char options[][100] = {"A. Moon", "B. Sun", "C. Venus", "D. Polaris",
                           "A. 365", "B. 360", "C. 364", "D. None of the above",
                           "A. Kansas", "B. South Korea", "C. Japan", "D. Taiwan",
                           "A. Marco Polo", "B. Sir Isaac Newton", "C. Galileo Galilei", "D. Nostradamus",
                           "A. strong", "B. well", "C. hard", "D. great"};

    char answers[5] = {'B', 'A', 'B', 'C', 'C'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess, ch;
    int score = 0;

    printf("********QUIZ GAME*********\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("%s\n", questions[i]);
        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("Your choice: ");
        scanf("%c", &guess);
        while ((ch = getchar()) != '\n' && ch != EOF); // Clear \n from input buffer

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("\tCorrect!\n");
            printf("************************\n");
            score ++;
        }
        else
        {
            printf("\tWrong! Correct answer: %c\n", answers[i]);
            printf("************************\n");
        } 
    }

    printf("************************\n");
    printf("Final score: %d out of %d\n", score, numberOfQuestions);
    printf("************************\n");

    return 0;
}