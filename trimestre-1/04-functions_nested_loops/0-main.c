#include <stdio.h>

const int myGlobalVar = 10;

/**
 *
 *
 */
int main(void)
{
	int counter = 0;
	char simpleChar = 'a';

	printf("hola counter %d\n", counter);
	printf("simple char = %c\n", simpleChar);

	printf("global variable = %d\n", myGlobalVariable);
}

void dummyFunction(void)
{
	printf("global variable = %d\n", myGlobalVariable);
}
