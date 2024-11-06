#include "main.h"

/**
* printLinkedList - print a linked list of node type node_t
*
* @head: head node of the linked list
*
* Return: nothing
*/
void printLinkedList(const node_t *head)
{
  node_t *temp = (node_t *) head;
  int i = 0;

  while (temp->next)
  {
    printf("[[%d]: %d] => ", i, temp->value);
    temp = temp->next;
    i++;
  }
  printf("[[%d]: %d] => NULL\n", i, temp->value);
}

