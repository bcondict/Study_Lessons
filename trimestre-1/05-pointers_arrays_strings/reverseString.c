#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void) {
  char *str = "hola jorge como estas";
  char *reverse_str = NULL;

  printf("first string: %s\n", str);

  reverse_str = reverse_string(str);

  printf("reversed string: %s\n", reverse_str);

  return (0);
}

/**
 * reverse_string - reverse a given string
 *
 * @str: string to reverse
 *
 * Return: the str string reversed
 */
char *reverse_string(char *str) {
  char *reversed_string = NULL;
  size_t str_len = 0, i = 0;

  str_len = strlen(str);

  reversed_string = (char *)malloc(sizeof(char) * str_len);

  for (i = 0; i < str_len; i++) {
    reversed_string[i] = str[str_len - 1 - i];
  }

  return (reversed_string);
}
