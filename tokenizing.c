#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"


void tokenizing(void) {
    // V1
    printf("*** Start of Tokenizing Words Demo ***\n"); // Prints the start of the word tokenizing demonstration

    char words[BUFFER_SIZE]; // Declares a character array to store words
    char* nextWord = NULL; // Declares a character pointer to store the next word
    int wordsCounter; // Declares an integer variable to count words

    do {
        printf("Type a few words separated by space (q - to quit): \n"); // Prompts the user to input a few words separated by space
        fgets(words, BUFFER_SIZE, stdin); // Gets user input and stores it in the 'words' variable
        words[strlen(words) - 1] = '\0'; // Removes the newline character '\n' from the user input

        if (strcmp(words, "q") != 0) { // Checks if the user input is not "q"
            nextWord = strtok(words, " "); // Divides the string into words using the space (' ') delimiter, starts with the first word
            wordsCounter = 1; // Initializes the word counter as 1

            while (nextWord) { // While there are words to process
                printf("word #%d is \'%s\'\n", wordsCounter++, nextWord); // Prints the current word and its sequential number
                nextWord = strtok(NULL, " "); // Continues tokenizing for the next word
            }
        }
    } while (strcmp(words, "q") != 0); // Continues the loop until the user input is "q"

    printf("*** End of Tokenizing Words Demo ***\n\n"); // Prints the end of the word tokenizing demonstration


    //V2 
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char  phrases[BUFFER_SIZE];
    char* nextPhrase = NULL;
    int   phrasesCounter;
    do {// Prompts the user for a comma separated string then counts the number of phrases until q key is pressed to exit
        printf("Type a few phrases separated by comma(q - to quit): \n");
        fgets(phrases, BUFFER_SIZE, stdin);
        phrases[strlen(phrases) - 1] = '\0';
        if ((strcmp(phrases, "q") != 0)) {
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;
            while (nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ",");
            }
        }
    } while (strcmp(phrases, "q") != 0);
    printf("*** End of Tokenizing Phrases Demo ***\n\n");

}