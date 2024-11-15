#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "programm"; 
    char guessed; 
    int attempts = 3; 
    int i, found, len;
    len = strlen(word);
    char hidden[len+1]; 
    hidden[0] = word[0]; // Keep the first letter visible
    for (i = 1; i < len - 1; i++) {
        hidden[i] = '_';
    }
    hidden[len - 1] = word[len - 1]; 
    hidden[len] = '\0';     printf("HANGMAN GAME\n");
    printf("        ------------\n");

    
    while (attempts > 0) {
        printf("\nWord: %s\n", hidden);
        printf("Attempts left: %d\n", attempts);
        printf("Enter a character: ");
        scanf(" %c", &guessed); 
        found = 0;
        for (i = 0; i < len; i++) {
            // Check if the guessed letter is in the word
            if (word[i] == guessed) {
                hidden[i] = guessed;found = 1;
}
        }

        if (!found) {
            attempts--; 
            printf("Wrong guess!\n");
        }

        if (strcmp(word, hidden) == 0) { // Check if the word is completely guessed
            printf("\nCongratulations! You guessed the word: %s\n", word);
            break;
        }
    }

    if (attempts == 0) { printf("\nSorry, you lost. The word was: %s\n", word);
    }

    return 0;
}
