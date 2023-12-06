#define _CRT_SECURE_NO_WARNINGS // Defines a macro to suppress warnings for certain functions in Visual Studio
#define BUFFER_SIZE 80 // Defines the maximum buffer size for strings as 80 characters

#include "string.h" // Includes the standard string manipulation library
#include "manipulating.h" // Includes the header file for the manipulating module


void manipulating(void) {
    // V1
    printf("*** Start of Concatenating Strings Demo ***\n"); // Prints the start of the string concatenation demonstration

    char string1[BUFFER_SIZE * 2]; // Declares an array to store the first string with size twice the BUFFER_SIZE
    char string2[BUFFER_SIZE]; // Declares an array to store the second string with size BUFFER_SIZE

    do {
        printf("Type the 1st string (q - to quit):\n"); // Prompts the user to input the first string
        fgets(string1, BUFFER_SIZE, stdin); // Gets the user input and stores it in string1
        string1[strlen(string1) - 1] = '\0'; // Removes the newline character '\n' from the input

        if ((strcmp(string1, "q") != 0)) { // Checks if the input is not "q"
            printf("Type the 2nd string:\n"); // Prompts the user to input the second string
            fgets(string2, BUFFER_SIZE, stdin); // Gets the user input and stores it in string2
            string2[strlen(string2) - 1] = '\0'; // Removes the newline character '\n' from the input

            strcat(string1, string2); // Concatenates string2 to string1
            printf("Concatenated string is \'%s\'\n", string1); // Prints the concatenated string
        }
    } while (strcmp(string1, "q") != 0); // Continues the loop until the input is "q"

    printf("*** End of Concatenating Strings Demo ***\n\n"); // Prints the end of the string concatenation demonstration


    //V2 
    printf("*** Start of Comparing Strings Demo ***\n");
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];
    int result;
    do {
        printf("Type the 1st string to compare (q - to quit):\n");
        fgets(compare1, BUFFER_SIZE, stdin);
        compare1[strlen(compare1) - 1] = '\0';
        if (strcmp(compare1, "q") != 0) {
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin);
            compare2[strlen(compare2) - 1] = '\0'; // Prompts the user to enter 2 strings and compares the length of both. 
            result = strcmp(compare1, compare2);
            if (result < 0) // Displays the results if the length is greater than, less than or equal in length
            {
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
            }
            else if (result == 0)
            {
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
            }
            else
            {
                printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
            }
        }
    } while (strcmp(compare1, "q") != 0);
    printf("*** End of Comparing Strings Demo ***\n\n");
}