#include "lists.h"

/**
* main - entry point
*
* Return: always 0
*/
int main(void)
{
  Node_t *head = createNode(10, NULL, NULL);
  Node_t *second = createNode(11, NULL, NULL);
  Node_t *third = createNode(12, NULL, NULL);
  Node_t *tail;

  appendNode(head, second);
  appendNode(head, third);

  printf("Forward: ");
  tail = printListForward(head);

  printf("Backward: ");
  printListBackward(tail);

  free(head);
  free(second);
  free(third);

  return (0);
}
