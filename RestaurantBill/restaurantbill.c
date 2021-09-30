//This file will hold the programs "Restaurant Bill" and "Number guess"

//Restaurant Bill:
/*Write a program that computes the tax and tip on a restaurant bill for a patron.
The program should accept the tax and tip both as percentages from the command line.
Display the meal cost, tax amount, tip amount, and total bill on the screen.
The meal cost should be randomly chosen between the following four:
Salad: $9.95
Soup: $4.55
Sandwich: $13.25
Pizza: $22.35*/

/*My plan: 
prompt for tax input, and tip input (percentages)
pick between the four options with rand() (prefaced by srand((unsigned) time(&t)) for "truer" randomness)
print the cost, tax amount, and tip amount
print the total cost by doing the math in the print statement (no need to save the amount in a variable)
*/

#include <stdio.h>
#include <time.h>

void main() {
    float tax, tip; //Declare variables
    printf("Enter tax percentage: ");
    scanf("%f", &tax); //Save float percentages if you want to do something like 1.0673487% for some reason beyond me
    printf("\nEnter tip percentage: ");
    scanf("%f", &tip); //Ditto
    printf("\n\n"); //Line breaks
    srand(time(0));
    int choice = rand()%4;
    float price;
    switch (choice) {
        case 0: //Salad
            price = 9.95;
            printf("Salad\nBefore tax: $%f\nTax: $%f\n Tip: $%f\nTotal: $%f", price, price*tax, price*tip, price+(price*tax)+(price*tip));
            break;
        case 1: //Soup
            price = 4.55;
            printf("Soup\nBefore tax: $%f\nTax: $%f\n Tip: $%f\nTotal: $%f", price, price*tax, price*tip, price+(price*tax)+(price*tip));
            break;
        case 2: //Sandwich
            price = 13.25;
            printf("Sandwich\nBefore tax: $%f\nTax: $%f\n Tip: $%f\nTotal: $%f", price, price*tax, price*tip, price+(price*tax)+(price*tip));
            break;
        case 3: //Pizza
            price = 22.35;
            printf("Pizza\nBefore tax: $%f\nTax: $%f\n Tip: $%f\nTotal: $%f", price, price*tax, price*tip, price+(price*tax)+(price*tip));
            break;
    }
}