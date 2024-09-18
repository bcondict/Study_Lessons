#include "main.h"

/**
* main - sum two number passed by the Command-Line arguments
*
* @argc: Count of arguments
* @argv: Argument vector, the arguments passed by the user
*
* Return: 0 on success, 1 on failure
*/
int main(int argc, __attribute__((unused))char *argv[])
{
	int num1 = 0, num2 = 0,sum = 0;

	if (argc < 3)
	{
		printf("Usage: ./sumArgumentNumbers {num1} {num2}.\n");
		return (1);
	}

	if (isNumber(argv[1]) == 0 || isNumber(argv[2]) == 0)
	{
		printf("Both arguments must be an integer.\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	sum = num1 + num2;

	printf("Sum of the Command-Line Arugments %d and %d is equal to %d\n", num1, num2, sum);


	return (0);
}

/**
* isNumber - a function to check if a given string has only numbers or not
*
* @string: the string to check the content inside
*
* Return: 0 if string has something different than number, 1 if string has only numbers
*/
int isNumber(const char *string)
{
	int i = 0;

	for (i = 0; string[i]; i++)
	{
		if (string[i] < 48 || string[i] > 57)
			return (0);
	}

	return (1);
}
