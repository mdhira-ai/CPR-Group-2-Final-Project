#include "converting.h"

#include "converting.h"

void converting()
{
    /* Version 1 */
    printf("***Start of Converting Strings to int Demo ***\n"); // display the start
    char int_string[80];                                        // declaring a string of characters with 80 elements
    int int_number;                                             // declaring a variable named int_number of type integer
    printf("Type the int numeric string (q - to quit):\n");     // prompt the user to enter a sequence of whole numbers
    gets(int_string);                                           // scanning the input
    while (strcmp(int_string, "q") != 0)                        // while the letter 'q' is not typed, run the next section
    {
        int_number = atoi(int_string);                  // int_number is initialized
        printf("Converted number is %d\n", int_number); // display the converted number
        printf("Type the int numeric string (q - to quit):\n");
        gets(int_string);
    }
    printf("*** End of Converting Strings to int Demo ***\n\n"); // show the end

    /* Version 2 */
    printf("*** Start of Converting Strings to double Demo ***\n");
    char double_string[80];                                    // a string of characters is declared
    double double_number;                                      // a variable of double type is declared
    printf("Type the double numeric string (q - to quit):\n"); // prompt the user to enter a series of numbers
    gets(double_string);                                       // accept the user input
    while (strcmp(double_string, "q") != 0)                    // while 'q' is not entered:
    {
        double_number = atof(double_string);               // pass the parameter
        printf("Converted number is %f\n", double_number); // display the number
        printf("Type the double numeric string (q - to quit):\n");
        gets(double_string);
    }

    printf("*** End of Converting Strings to double Demo ***\n\n");

    /* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n"); // mark the start of the program
    char long_string[80];
    long long_number;                                        // two variables declared on the same line
    printf("Type the long numeric string (q - to quit):\n"); // prompt the user to type a long numeric string
    gets(long_string);                                       // scan the input
    while (strcmp(long_string, "q") != 0)                    // while 'q' is not typed, run:
    {
        long_number = atol(long_string);                   // the parameters are passed
        printf("Converted number is %ld\nuf long_number"); // display the converted number
        printf("Type the long numeric string (q - to quit):\n");
        gets(long_string);
    }
    printf("*** End of Converting Strings to long Demo ***\n\n"); // end of program
}

