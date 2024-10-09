#include "main.h"


/**
* main - Entry point
*
* Return: always 0;
*/
int main(void)
{
  printf("The sum of 4, 5, 6: %d\n", sum(3, 4, 5, 6));
  printf("The sum of 8, 9, 10, 11: %d\n", sum(4, 8, 9, 10, 11));
  printf("The sum of 1, 2: %d\n", sum(2, 1, 2));
  printf("The sum of -1, -2, 8, 10, 15: %d\n", sum(5, -1, -2, 8, 10, 15));

  printf("hola %d, %d, %d, %d", 5, 6, 7, 8);

  return (0);
}

int sum(int num_of_args, ...)
{
  int sumatory = 0;
  int i = 0;

  va_list args;
  va_start(args, num_of_args);

  for (i = 0; i < num_of_args; i++)
    sumatory += va_arg(args, int);

  va_end(args);

  return (sumatory);
}

