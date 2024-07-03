#include "main.h"

/**
 * printList - print the linked list
 *
 * @head: head of the linked list
*/
void printList(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}
