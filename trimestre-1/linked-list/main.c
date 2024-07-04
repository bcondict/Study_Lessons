#include "main.h"

/**
* main - entry point
*
* Return: Always 0
*/
int main (void)
{
  Node_t *node2 = createNode(8, NULL);
  Node_t *node1 = createNode(1, node2);
  Node_t *head = createNode(5, node1);

  printList(head);

  return (0);
}


