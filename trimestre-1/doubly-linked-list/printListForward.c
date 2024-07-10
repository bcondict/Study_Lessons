#include "lists.h"

/**
* printListForward - print the a linked list from the head to the tail
*
* @head: head node of the linked list
*
* Return: A pointer to the last node
*/
Node_t *printListForward(Node_t *head)
{
  Node_t *temp = head;

  while (temp != NULL)
  {
    printf("%d -> ", temp->data);

    if (!temp->next)
      break;

    temp = temp->next;
  }

  printf("NULL\n");

  return (temp);
}

