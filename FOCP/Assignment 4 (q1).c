#include <stdio.h>
#include <stdlib.h>

int main() {
    int userChoice, computerChoice;
    char *choices[] = {"Rock", "Paper", "Scissors"};

   
    printf("WELCOME TO THE ROCK,PAPER,SCISSOR GAME \n");
    printf("Enter your choice (1-100): ");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 100) {
        printf("Invalid choice. Please enter a number between 1 and 100.\n");
        return 1;
        
    }

    if (userChoice >= 1 && userChoice <= 33) {
        userChoice = 0; 
    } else if (userChoice >= 34 && userChoice <= 66) {
        userChoice = 1; 
    } else {
        userChoice = 2;  
    }
    computerChoice = rand() % 100 + 1;

    
    if (computerChoice >= 1 && computerChoice <= 33) {
        computerChoice = 0;
    } else if (computerChoice >= 34 && computerChoice <= 66) {
        computerChoice = 1;  
    } else {
        computerChoice = 2;
    }

    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
