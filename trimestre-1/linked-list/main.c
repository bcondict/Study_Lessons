#include "main.h"

/**
* main - entry point
*
* Return: Always 0
*/
int main (void)
{
  Node_t *head = createNode(5, NULL);
  Node_t *nodeApart = createNode(8, NULL);

  appendNode(6, head);
  appendNode(7, head);

  printList(head);
  insertNodeAtIndex(head, nodeApart, 3);
  printList(head);

  return (0);
}


