#include "lists.h"

/**
* printListBackward - print the a linked list from the tail to the head
*
* @tail: tail node of the linked list
*
* Return: A pointer to the first node
*/
Node_t *printListBackward(Node_t *tail)
{
  Node_t *temp = tail;

  while (temp != NULL)
  {
    printf("%d -> ", temp->data);

    if (!temp->prev)
      break;

    temp = temp->prev;
  }

  printf("NULL\n");

  return (temp);
}

