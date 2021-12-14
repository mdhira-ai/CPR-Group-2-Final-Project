#include "manipulating.h"

void manipulating() {
/* Version 1 */
	printf("*** Start of Concatenating Strings Demo ***\n");
	char string1[80];
	char string2[80];
	printf("Type the 1st string (q - to quit):\n");
	gets(string1);
	while (strcmp(string1, "q") != 0)
	{
		printf("Type the 2nd string:\n");
		gets(string2);
		strcat(string1, string2);
		printf("Concatenated string is \'%s\'\n");
		gets(string1);
	}
	printf("*** End of Concatenating Strings Demo ***\n\n");


/* Version 2 */
	printf("*** Start of Comparing Strings Demo ***\n");
	char compare1[80];
	char compare2[80];
	int result;
	printf("Type the 1st string to compare (q - to quit):\n");
	gets(compare1);
	while (strcmp(compare1, "q") != 0)
	{
		printf("Type the 2nd string to compare:\n");
		gets(compare2);
		result = strcmp(compare1, compare2);
		if (result < 0)
			printf("1st string is less than 2nd\n");
		else if (result == 0)
			printf("1st string is equal to 2nd\n");
		else
			printf("1st string is greater than 2nd\n");
		printf("Type the 1st string to compare (q - to quit):\n");
		gets(compare1);
	}
	printf("*** End of Comparing Strings Demo ***\n\n");


/* Version 3 */
	printf("*** Start of Searching Strings Demo ***\n");
	char big_string[80];
	char sub_string[80];
	char* address;
	printf("Type the big string (q - to quit):\n");
	gets(big_string);
	while (strcmp(big_string, "q") != 0)
	{
		printf("Type the substring:\n");
		gets(sub_string);
		address = strstr(big_string, sub_string);
		if (address != NULL)
			printf("Found at %1d position\n", (long)address - (long)big_string);
		else
			printf("Not found\n");
		printf("Type the big string (q - to quit):\n");
		gets(big_string);
	}
	printf("*** End of Searching Strings Demo ***\n\n");
}