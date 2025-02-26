#include <stdio.h>

int main(void){ 
    char userInput[99];
    int i = 0; 

    // printf("Enter a word >>> "); 
    scanf("%s", userInput);

    while (userInput[i] != 0)
    {
        printf("%c\n", userInput[i]); 
        i++; 
    }

    return 0; 
}