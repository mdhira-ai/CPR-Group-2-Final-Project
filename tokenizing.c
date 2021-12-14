#include "tokenizing.h"

void tokenizing()
{
    /* Version 1 */
    printf("*** Start of Tokenizing Words Demo ***\n");            // displaying message
    char words[200];                                               // declaring an array of 200 elements, type char and named words
    char *word;                                                    //
    int w_counter;                                                 // declaring an integer variable named w_counter
    printf("Type a few words separated by space(q - to quit):\n"); // prompting the user to enter some words
    gets(words);                                                   // accepting input from the user
    while (strcmp(words, "q") != 0)                                // while "q" is not entered by user, run the next part
    {
        word = strtok(words, " "); // get the tokens
        w_counter = 1;             // initializing variable to 1
        while (word)
        {
            printf("Word #%d is \'%s\'\n", w_counter++, word); // the word and the number is displayed
            word = strtok(NULL, " ");
        }
        printf("Type a few words separated by space(q - to quit):\n"); // prompt the user to enter words
        gets(words);                                                   // scanning the input
    }
    printf("*** End of Tokenizing Words Demo ***\n\n");

    /* Version 2 */
    >> insert here

        /* Version 3 */
        >> insert here
}
