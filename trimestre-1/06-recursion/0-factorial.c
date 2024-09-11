#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - funnction to calculate the factorial result
 *
 * @number: numbert to calculate te factorial
 *
 * Return: the restult of the factrual
 */
int factorial(int number)
{
	if (number == 0)
		return (1);

	return (number * factorial(number - 1));
}

/**
* main - Entry point
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int numberToCalculate = 0;
	int result = 0;

	if (argc < 2)
	{
		printf("Usage ./a.out ${numberToCalculate}");
		return (0);
	}

	numberToCalculate = atoi(argv[1]);
	result = factorial(numberToCalculate);

	printf("Factorial of %d is %d\n", numberToCalculate, result);

	return (0);
}
