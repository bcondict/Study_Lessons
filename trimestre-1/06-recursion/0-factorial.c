#include <stdio.h>


/**
 * factorial - function to calculate the factorial result
 *
 * @n: number to calculate the factorial
 *
 * Return: the result of the factorial result;
 */
int factorial(int n)
{
  if (n == 0)
    return 1;

  return n * factorial(n - 1);

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int number = 5;
  int result = factorial(number);

  printf("Factorial of %d is %d\n", number, result);

  return (0);
}
