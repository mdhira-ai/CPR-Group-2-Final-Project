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
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[200]; // declaring a string of characters of 200 elements
    char *phrase;
    int p_counter;                                                   // declaring a integer variable named p_counter
    printf("Type a few phrases separated by comma(q - to quit):\n"); // prompting the user to enter some phrases
    gets(phrases);                                                   // accepting the user input
    while (strcmp(phrases, "q") != 0)                                // while q is not typed, run the next lines of code
    {
        phrase = strtok(phrases, "f"); // get the tokens
        p_counter = 1;                 // p_counter initialized to 1
        while (phrase)
        {
            printf("Phrase #%d is \'%s\'\n", p_counter++, phrase); // the phrase is displayed
            phrase = strtok(NULL, ",");                            //
        }
        printf("Type a few phrases separated by comma(q - to quit):\n");
        gets(phrases);
    }
    printf("*** End of Tokenizing Phrases Demo ***\n\n");

    /* Version 3 */
    >> insert here
}
