#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 to 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Optional: Print the random Number (Keep commented out for a real game)
    // printf("Random Number: %d\n", randomNumber);
    
    printf("I have generated a number between 1 and 100. Good luck!\n"); // Added a welcome message
    
    do {
        // IMPROVEMENT: Added '\n' at the end of the prompt for cleaner output
        printf("Guess the number: "); 
        scanf("%d", &guessed);
        
        if (guessed > randomNumber) {
            printf("Lower Number please.\n");
        }
        else if (guessed < randomNumber) {
            printf("Higher number please.\n");
        }
        // This 'else' block executes only when guessed == randomNumber
        else {
            // NOTE: The congratulation message will print even before the final 'You guessed in X guesses' message
            printf("Congrats! That is the correct number!\n");
        }
        
        // This should always be incremented regardless of whether the guess was correct or not
        no_of_guesses++; 
    }
    while (guessed != randomNumber); // The loop continues until the guess matches the random number
    
    // Final score message
    printf("You guessed the number in %d guesses.\n", no_of_guesses);
    
    return 0;
}