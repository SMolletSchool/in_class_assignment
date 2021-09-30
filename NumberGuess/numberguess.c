//Number guessing game:
/*Create an interactive program that allows a user to guess a number between 1-10.
You should create a menu that will have options (this should be displayed on the screen):
Press 1 to play a game
Press 2 to change the max number
Press 3 to quit
If option 1 is selected the program should prompt the user to enter a number.
If the user is correct tell them they won then the program should go back to the menu.
Otherwise tell them if they were too low or high in there guess and allow them to guess again.
This should continue until they win.
If they enter q instead of a number when prompted the game should end(NOT the program) and return to the menu.
If option 2 is chosen, then tell them the max value they can set the number.
Make sure they do not enter a negative number or go above the max value.
If option 3 is chosen thank the user for playing and end the game.

Now create a new branch – call it save_user_max_number
Can you save the users request for the max number where the program is able to remember it the next time it starts?*/

/*My plan:
going to separate the three options into their own functions for less congested-looking code
option 1:
get the random number between 1 and [max number] (defaults to 10)
start a while loop
prompt for an input
if the input is q, return out of the function
check if the input equals the random number
if it's lower or higher, tell the user, and restart the loop
otherwise, the while loop will end, as the continue parameter is if the number is not equal to the random number
return out
option 2:
prompt for a new max_value
if it's invalid, say so, and prompt again
save the new value in variable accessable by option 1
return out
option 3:
end execution by returning out of main
invalid option:
say so, and prompt for an option again
*/

#include <stdio.h>
#include <stdlib.h> //Needing for string conversions

int main() {
    int numberGuessMax, option = 0; //switched to an int as I remembered that scanf exists
    FILE *pointer; //File input for max number
    pointer = fopen("C:/Users/shymo/GIT_inclass/in_class_assignment/NumberGuess/savedvalue.data", "r+");
    char fileBuffer[10];
    fscanf(pointer, "%s", fileBuffer);
    numberGuessMax = atoi(fileBuffer);
    do {
        printf("Pick one.\n1: Play the guessing game\n2: Change the max number\n3: Quit\n");
        scanf("%d", &option);
        printf("You picked %d\n", option);
        if (option == 1) {
            int randomNumber = rand()%(numberGuessMax)+1; //Pick a number. Any number.
            int guess = 0; //Setting here to stop any silliness
            char buffer[5]; //buffer for holding the string pre-conversion
            do {
                printf("Guess the number! ");
                scanf("%s", &buffer); //Guess is stored in buffer
                if (buffer[0] != 'q') { //if the first character is q, quit
                    guess = atoi(buffer); //Convert to an int otherwise
                    printf("\nYour guess of %d is...", guess);
                    if (guess == randomNumber) { //correct guess?
                        printf("correct!\n");
                    } 
                else {
                    if (guess > randomNumber) printf("too high!\n"); //Guessed too high
                    else printf("too low!\n"); //Guessed too low
                }
              }
            } while (guess != randomNumber && buffer[0] != 'q');
        }
        else if (option == 2) {
            int newMax;
            int success = 0;
            do {
                printf("Enter a new maximum number. Keep it between 2 and %d, please! ", INT_MAX);
                scanf("%i", &newMax);
                if (newMax > 2 && newMax < INT_MAX) {
                    numberGuessMax = newMax;
                    fclose(pointer);
                    pointer = fopen("C:/Users/shymo/GIT_inclass/in_class_assignment/NumberGuess/savedvalue.data", "w");
                    fprintf(pointer, "%d", newMax);
                    success++;
                }
                else printf("\nInvalid input!\n");
            } while (success == 0);
        }
        else if (option != 3 && option != 1 && option != 2){ //invalid input
            printf("Invalid input!\n\n");
        }
    }
    while (option != 3); //quit
    printf("\nThanks for playing!");
    fclose(pointer);
    return 0;
}