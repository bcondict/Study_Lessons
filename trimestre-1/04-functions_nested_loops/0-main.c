#include <stdio.h>

void dummyFunction(void);


const int myGlobalVar = 10;

/**
 * main - Entry point of the function
 *
 * Return: Always 0
 */
int main(void)
{
	int counter = 0;
	char simpleChar = 'a';

	printf("hola counter %d\n", counter);
	printf("simple char = %c\n", simpleChar);

	printf("global variable = %d\n", myGlobalVar);

	dummyFunction();

	return (0);
}

/**
 * dummyFunction - simple function to print a message
 *
 * Return: nothing
 */
void dummyFunction(void)
{
	printf("global variable = %d\n", myGlobalVar);
}
