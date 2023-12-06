// CONVERTING MODULE SOURCE

#define _CRT_SECURE_NO_WARNINGS // Defines a macro to suppress warnings for certain functions in Visual Studio
#define BUFFER_SIZE 80 // Defines the maximum buffer size for strings as 80 characters
#include "converting.h" // Includes the header file for the converting module


void converting(void) {
    // V1
    printf("*** Start of Converting Strings to int Demo ***\n"); // Prints the start of the converting strings to integer demonstration

    char intString[BUFFER_SIZE]; // Declares an array to store a string representing an integer with a size of BUFFER_SIZE
    int intNumber; // Declares an integer variable to store the converted integer

    do {
        printf("Type an int numeric string (q - to quit):\n"); // Prompts the user to input an integer string or 'q' to quit
        fgets(intString, BUFFER_SIZE, stdin); // Reads the string input from the user and stores it in intString
        intString[strlen(intString) - 1] = '\0'; // Removes the newline character from the input
        if (strcmp(intString, "q") != 0) { // Checks if the input is not "q"
            intNumber = atoi(intString); // Converts the string to an integer using the atoi function
            printf("Converted number is %d\n", intNumber); // Prints the converted integer
        }
    } while (strcmp(intString, "q") != 0); // Loops until the user inputs 'q' to quit

    printf("*** End of Converting Strings to int Demo ***\n\n"); // Prints the end of the converting strings to integer demonstration
}

