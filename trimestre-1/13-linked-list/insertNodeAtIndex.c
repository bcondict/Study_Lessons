#include "main.h"

/**
* insertNodeAtIndex - inser a node type of node_t at a given index
*
* @head: head node of the linked list
* @node: node to be inserted at an index
* @index: index to insert the node
*
* Return: nothing
*/
void insertNodeAtIndex(const node_t *head, node_t *node, int index)
{
  node_t *temp = (node_t *) head;
  int i = 0;

  while ((i + 1) < index && temp->next)
  {
    temp = temp->next;
    index++;
  }

  node->next = temp->next;
  temp->next = node;
}
