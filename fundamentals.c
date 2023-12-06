//FUNDAMENTALS MODULE SOURCE 
#define _CRT_SECURE_NO_WARNINGS // Defines a macro to suppress warnings for certain functions in Visual Studio
#define BUFFER_SIZE 80 // Defines the maximum buffer size for strings as 80 characters
#define NUM_INPUT_SIZE 10 // Defines the size of the input buffer for numbers as 10 characters
#include "fundamentals.h" // Includes the header file for the fundamentals module

void fundamentals(void) {
    // VI
    printf("*** Start of Indexing Strings Demo ***\n"); // Prints the start of the indexing strings demonstration

    char buffer1[BUFFER_SIZE]; // Declares an array to store string input with a size of BUFFER_SIZE
    char numInput[NUM_INPUT_SIZE]; // Declares an array to store numerical input with a size of NUM_INPUT_SIZE
    size_t position; // Declares a variable to store the position of the character within the string

    do {
        printf("Type not empty string (q - to quit):\n"); // Prompts the user to input a non-empty string or 'q' to quit
        fgets(buffer1, BUFFER_SIZE, stdin); // Reads the string input from the user and stores it in buffer1
        buffer1[strlen(buffer1) - 1] = '\0'; // Removes the newline character from the input

        if (strcmp(buffer1, "q") != 0) { // Checks if the input is not "q"
            printf("Type the character position within the string:\n"); // Prompts the user to input the character position
            fgets(numInput, NUM_INPUT_SIZE, stdin); // Reads the numerical input from the user and stores it in numInput
            numInput[strlen(numInput) - 1] = '\0'; // Removes the newline character from the input
            position = atoi(numInput); // Converts the input string to an integer

            if (position >= strlen(buffer1)) { // Checks if the position is greater than or equal to the string length
                position = strlen(buffer1) - 1; // Sets position to the maximum available position in the string
                printf("Too big... Position reduced to max. available\n"); // Prints a message indicating the reduction of position
            }

            printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]); // Prints the character found at the specified position
        }
    } while (strcmp(buffer1, "q") != 0); // Loops until the user inputs 'q' to quit

    printf("*** End of Indexing Strings Demo ***\n\n"); // Prints the end of the indexing strings demonstration
}
