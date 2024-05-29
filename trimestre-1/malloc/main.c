#include "main.h"

/**
* main - entry point
*
* Return: 0 on succes, otherwise 1
*/
int main(void)
{
  int number = 0, i = 0;
  int *array = NULL;

  printf("Enter the number to allocate memory ");
  scanf("%d", &number);

  array = (int *) malloc(number * sizeof(int));
  if (!array)
  {
    printf("There's been an error during allocating memory\n");
    return 1;
  }

  for (i = 0; i < number; i++)
  {
    array[i] = i + 1;
  }

  printf("array elements: ");
  for (i = 0; i < number; i++)
  {
    printf("%d, ", array[i]);
  }
  printf("\n");

  free(array);
  return (0);
}
