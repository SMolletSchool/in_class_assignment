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