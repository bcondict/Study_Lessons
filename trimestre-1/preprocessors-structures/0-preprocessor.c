#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
  int num1 = 0, num2 = 0;

  if (argc != 3)
  {
    printf("Usage: ./0-preprocessor <num1> <num2>\n");
    return (1);
  }

  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);

  printf("Maximum: %d\n", MAX(num1, num2));
  printf("Minumum: %d\n", MIN(num1, num2));
  printf("Value of PI: %.5f\n", PI);
}
