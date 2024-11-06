#include "main.h"

/**
* appendNode - append a node type node_t
*
* @head: head of the linked list
* @value: value of the node to append
*
* Return: nothing
*/
void appendNode(const node_t *head, int value)
{
  node_t *newNode = createNode(value, NULL);
  node_t *temp = (node_t*) head;

  if (!newNode)
    return;

  while (temp->next)
    temp = temp->next;

  temp->next = newNode;
}
