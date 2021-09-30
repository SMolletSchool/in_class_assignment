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

int numberGuessMax; //Define max number variable

int main() {
    char option;
    numberGuessMax = 10;
    do {
        option = getchar();
        if (option = '1') {
            guessingGame();
        }
        else if (option != '2') {
            setGuessMax();
        }
    }
    while (option != '3');
    return 0;
}

void guessingGame() {
    return;
}

void setGuessMax() {
    int newMax;;
    scanf("%i", &newMax);
    numberGuessMax = newMax;
    return;
}