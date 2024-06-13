#include "main.h"


/**
* main - Entry point
*
* Return: 0 on success or 1 on failure
*/
int main(int argc, char *argv[])
{
  /* declare a function pointer */
  void (*func_ptr)();
  char *valid_actions[] = {"actions", "hello", "goodbye"};
  int i = 0, valid_actions_len = 0;


  if (argc != 2)
  {
    printf("Usage: ./function-pointers <action>\n");
    printf("Run ./function-pointers actions, to see the valid actions\n");
    return (1);
  }

  if (!check_includes(valid_actions, argv[1]))
  {
    printf("Invalid action, run ./function-pointers actions, to see the valid actions\n");
    return (1);
  }

  valid_actions_len = (sizeof(valid_actions) / sizeof(valid_actions[0]));
  if (strcmp(argv[1], valid_actions[0]) == 0)
  {
    printf("The valid actions are:\n");
    for (i = 0; i < valid_actions_len; i++)
    {
      printf("\t%s\n", valid_actions[i]);
    }
    printf("\n");
    return (0);
  }


  if (strcmp(argv[1], valid_actions[1]) == 0)
    func_ptr = hello;

  if (strcmp(argv[1], valid_actions[2]) == 0)
    func_ptr = say_goodbye;

  greet(func_ptr);
  return (0);
}


void hello()
{
  printf("Hello!\n");
}
void say_goodbye()
{
  printf("Good bye!\n");
}

void greet(void (*func)())
{
  func();
}

/**
* check_includes - check if an array of string containts a string
*
* @string_array: array of string to check if containts the string searched
* @string_to_check: the string to be checked if exist on the array
*
* Return: 0 if the string was found, 1 otherwise;
*/
int check_includes(char *string_array[], char *string_to_check)
{
  int i = 0;

  for (i = 0; string_array[i]; i++)
  {
    if (strcmp(string_array[i], string_to_check) == 0)
      return (1);
  }

  return (0);
}

