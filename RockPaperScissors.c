#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

char* upperCase(char* s);
char* randomChoice(void);
int playGame(char* player, char* computer);

int main(void)
{   //Create variable for user input
    char input[9];
    //Get user input
    printf("\nChoose your weapon (rock, paper, scissors)\nYour weapon: ");
    scanf("%8s", input);
    //Create variable to store length of input
    int len = strlen(input);
    //Create variable to store user input in uppercase
    char* playerSelection = upperCase(input);
    //Check for valid input
    if (len > 9 || len == '\0')
    {
        printf("\n%s is not a valid weapon", playerSelection);
        return 1;
    }
    //Check for valid input
    if (strcmp(playerSelection, "ROCK") == 0|| strcmp(playerSelection, "PAPER") == 0|| strcmp(playerSelection, "SCISSORS") == 0)
    {
        //Store random output in a variable for computer choice
         char* computerSelection = randomChoice();
        //Call game function
        playGame(playerSelection, computerSelection);
        return 0;
    }
    printf("%s is not a valid weapon", playerSelection);
    return 1;
}
//Function to generate random computer choice
char* randomChoice(void)
{   //Generate a random number
    srand(time(NULL));
    int number = rand() % 3;
    //Create variable for computer choice
    char* computer[9];
    //Convert random number into corresponding string value
    switch(number)
    {
        case 0:
        *computer = "ROCK";
        break;
        case 1:
        *computer = "PAPER";
        break;
        case 2:
        *computer = "SCISSORS";
        break;
    }
    return *computer;
}
//Function to convert user input into uppercase
char* upperCase(char* s)
{
        for (int i = 0, len = strlen(s); i < len; i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}
//Function to play the game and declare winner
int playGame(char* player, char* computer)
{   //Check condition and print result
    if (strcmp(player, computer)== 0)
    {
        printf("\nIt's a tie!");
        return 0;
    }
    if (strcmp(computer, "ROCK")== 0 && strcmp(player, "PAPER")== 0)
    {
        printf("\nYou win! PAPER beats ROCK!");
        return 0;
    }
    if (strcmp(computer, "PAPER")== 0 && strcmp(player, "SCISSORS")== 0)
    {
        printf("\nYou win! SCISSORS beats PAPER!");
        return 0;
    }
    if (strcmp(computer, "SCISSORS")== 0 && strcmp(player, "ROCK")== 0)
    {
        printf("\nYou win! ROCK beats SCISSORS!");
        return 0;
    }
    printf("\nYou lose! %s beats %s", computer, player);
    return 0;
}