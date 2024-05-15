#include <stdio.h>
#include <stdlib.h>

/**
* fibonacci - Compute the nth Fibonacci number
*
* @n: nth Fibonacci number to compute
*
* Return: nth Fibonacci number
*/
int fibonacci(int n)
{
  if (n <= 1)
    return n;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
  int position = 0;
  int fib = 0;

  if (argc != 2)
  {
    printf("Usage: %s <position>\n", argv[0]);
    return 1;
  }

  position = atoi(argv[1]);
  fib = fibonacci(position);

  printf("Fibonacci number at position %d is %d\n", position, fib);

  return 0;
}
