#include <stdio.h>

int main(void){ 
    // Initialization of variables
    char userInput[99];
    int i = 0; 

    // Reading user input
    scanf("%s", userInput);

    // Repeat until the symbol is 0
    while (userInput[i] != 0)
    {
        // Print each character on a new line
        printf("%c\n", userInput[i]); 

        // Increment the i variable to move along the line.
        i++; 
    }

    return 0; 
}