#include "main.h"

/**
* main - entry point, make an action depeding on the system arugments passed by the user
*
* @argc: count of the arugments passed by the user
* @argv: Arguments array of the executable
*
* Return: 0 on success or 1 on failure
*/
int main(int argc, char *argv[])
{
  int (*function_pointer)();
  char *valid_actions[] = {"actions", "hello", "goodbye"};
  int valid_actions_len = sizeof(valid_actions) / sizeof(valid_actions[0]);
  int i = 0;

  if (argc != 2)
  {
    printf("Usage: ./function-pointers <action>\n");
    printf("Run './function-pointers actions' to see the valid actions\n");
    return (1);
  }

  if (check_includes(valid_actions, valid_actions_len, argv[1]) == FALSE)
  {
    printf("Invalid action\nRun './function-pointers actions' to see the valid actions\n");
    return (1);
  }

  if (strcmp(argv[1], valid_actions[0]) == 0)
  {
    printf("The valid actions are:\n");

    for (i = 0; i < valid_actions_len; i++)
      printf("\t%s\n", valid_actions[i]);

    printf("\n");
    return (0);
  }

  if (strcmp(argv[1], valid_actions[1]))
    function_pointer = goodbye;
  if (strcmp(argv[1], valid_actions[2]))
      function_pointer = hello;

  execute_function(function_pointer);

  return (0);
}

/**
* check_includes - Check if an array has an string
*
* @string_array: array of string to check if has the string_to_check
* @string_to_check: string to check if is inside string_array
*
* Return: 0 if array do not have the string, 1 otherwise
*/
int check_includes(char *string_array[], int string_array_len, char *string_to_check)
{
  int i = 0;

  for (i = 0; i < string_array_len; i++)
  {
    if (strcmp(string_array[i], string_to_check) == 0)
      return TRUE;
  }

  return FALSE;
}


/**
  * execute_function - function to execute function pointers
  *
  * @pointer_function: function pointer to execute
  *
  * Return: always void
  */
void execute_function(int (*pointer_function)())
{
  int ret = pointer_function();

  printf("ret = %d", ret);
}

int hello()
{
  printf("Hello!!!\n");
  return (99);
}

int goodbye()
{
  printf("See you later!\n");
  return (1);
}
