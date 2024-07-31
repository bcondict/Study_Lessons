#include "main.h"

/**
 * appendNode - append a new node to the end
 *
 * @data: data to create a new node
 * @head: head node 
*/
void appendNode(int data, Node_t *head)
{
  Node_t *newNode = createNode(data, NULL);
  Node_t *temp = head;

  if (!newNode)
    return;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = newNode;
}
