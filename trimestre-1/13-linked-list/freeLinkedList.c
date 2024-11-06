#include "main.h"

/**
* freeLinkedList - free a linked list with nodes type of node_t recuservely
*
* @head: head node of the linked list
*
* Return: nothing
*/
void freeLinkedList(node_t *head)
{
  if (head->next)
    freeLinkedList(head->next);

  free(head);
}


