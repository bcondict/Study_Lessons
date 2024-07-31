#include "main.h"

/**
 * printList - print the linked list
 *
 * @head: head of the linked list
*/
void printList(Node_t *head)
{
  Node_t *temp = head;

  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}
