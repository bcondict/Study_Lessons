#include "main.h"

/**
* main - entry point, create a single linked list
*
*/
int main(void)
{
  node_t *head = createNode(1, NULL);
  node_t *node_1 = createNode(2, NULL);

  appendNode(head, 2);
  appendNode(head, 3);

  printLinkedList(head);

  insertNodeAtIndex(head, node_1, 3);

  printLinkedList(head);

  freeLinkedList(head);
  return (0);
}
