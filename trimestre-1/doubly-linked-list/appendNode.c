#include "lists.h"

/**
* appendNode - append a node to the end of the linked list
*
* @head: head node of the linked list
* @node: 
*/
void appendNode(Node_t *head, Node_t *node)
{
  Node_t *temp = head;

  while (temp && temp->next)
  {
    temp = temp->next;
  }

  temp->next = node;
  node->prev = temp;
}
