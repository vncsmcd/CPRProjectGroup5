#include "fundamentals.h"    // Includes the header file for the fundamentals module
#include "manipulating.h"    // Includes the header file for the manipulating module
#include "converting.h"      // Includes the header file for the converting module
#include "tokenizing.h"      // Includes the header file for the tokenizing module

int main(void) {
    char buff[10];    // Declares a character array 'buff' with a size of 10 characters
    do {
        printf("Which module to run?\n");    // Displays a menu prompting the user to choose a module
        printf("1- Fundamentals\n");
        printf("2- Manipulating \n");
        printf("3- Converting\n");
        printf("4- Tokenizing\n");
        printf("0- Finish\nYour selection: ");    // Prompts for the user's selection
        fgets(buff, 10, stdin);    // Reads the user's input and stores it in the 'buff' array
        switch (buff[0]) {    // Begins a switch statement based on the first character of 'buff'
        case '1': fundamentals();    // Calls the 'fundamentals' function if user input is '1'
            break;
        case '2': manipulating();    // Calls the 'manipulating' function if user input is '2'
            break;
        case '3': converting();    // Calls the 'converting' function if user input is '3'
            break;
        case '4': tokenizing();    // Calls the 'tokenizing' function if user input is '4'
            break;
        case '0': break;    // Exits the loop if user input is '0'
        default: printf("Bad selection! \n");    // Displays a message for an invalid selection
        }
    } while (buff[0] != '0');    // Loops until the user input is '0'
    return 0;    // Indicates successful program execution
}