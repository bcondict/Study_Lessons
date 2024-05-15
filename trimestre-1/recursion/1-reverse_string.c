#include <stdio.h>


/**
 * _strlen - get the lenght of a given string
 *
 * @str: string to get the lengh
 *
 * Return: the lenght of the string
 */
int _strlen(char *str)
{
  int i = 0, length = 0;

  for (i = 0; str[i] != '\0'; i++ )
  {
    length++;
  }

  return (length);
}

/**
 * reverse - Print a string in reverse
 *
 * @str: string to print in reverse
 * @index: index of the string to print
 *
 * Return: void
 */
void print_reverse_string(const char *str, int index)
{
  if (index >= 0)
  {
    printf ("%c", str[index]);
    print_reverse_string(str, index - 1);
  }
}

/**
 * reverse_string - reverse a given string
 *
 * @str: pointer to the string to reverse
 * @start: starting point of the string
 * @end: ending point of the string
 * @mid: midium of the string
 *
 * Return: the reversed string
 */
char *reverse_string(char *str, int start, int end, int mid)
{
  char tmp = '\0';

  tmp = str[start];
  str[start] = str[end];
  str[end] = tmp;

  if (end != mid)
  {
    return reverse_string(str, start + 1, end - 1, mid);
  }

  return (str);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
  char *str;
  int start = 0, end = 0, mid = 0;

  if (argc != 2)
  {
    printf("Usage %s <string>\n", argv[0]);
    return (0);
  }

  str = argv[1];
  end = _strlen(str) - 1;
  mid = (end / 2);

  printf("Original string: %s\n", str);
  printf("Print reversed string: ");
  print_reverse_string(str, end);
  printf("\n");

  reverse_string(str, start, end, mid);

  printf("Reversed string permanetly: %s\n", str);

  return (0);
}
