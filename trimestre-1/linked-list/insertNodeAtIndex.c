#include "main.h"

/**
*
*
*/
void insertNodeAtIndex(Node_t *head, Node_t *new_node, int position)
{
  int index = 0;
  Node_t *temp = head, *save = head;

  while ((index + 1) < position && head->next != NULL)
  {
    temp = temp->next;
    index++;
  }

  save = temp->next;
  temp->next = new_node;
  new_node->next = save;
}

