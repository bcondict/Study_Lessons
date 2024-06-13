#include "main.h"


/**
* main - Entry point
*
* Return: always 0;
*/
int main ()
{
  printf("the sum of 3, 4, 5, 6: %d\n", sum(3, 11, 5, 9));
  printf("the sum of 2, 1, 5: %d\n", sum(2, 1, 5));
  printf("the sum of 8, 5: %d\n", sum(1, 8, 5));

  return (0);
}

/**
* sum 
*
*/
int sum(int num, ...)
{
  va_list args;
  va_start(args, num);

  int sumatory = 0;
  int i = 0;

  for (i = 0; i < num; i++)
  {
    sumatory += va_arg(args, int);
  }

  va_end(args);

  return (sumatory);
}
