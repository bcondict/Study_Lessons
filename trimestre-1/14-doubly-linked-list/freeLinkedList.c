#include "lists.h"

/**
 * freeLinkedList - free a linked list with nodes type node_t
 *
 * @head: head node of the linked list
 *
 * Return: nothing
 */
void freeLinkedList(node_t *head) {
  if (head->next)
    freeLinkedList(head->next);

  free(head);
}
