#include "lists.h"

/**
 * printLinkedListForward - print the linked list with node type node_t
 * from the head to the tail
 *
 * @head: head node type node_t of the linked list
 *
 * @Return: size of the linked list
 */
int printLinkedListForward(const node_t *head) {
  node_t *temp = (node_t *)head;
  int index = 0;

  while (temp->next) {
    printf("[[%d]: %d] -> ", index, temp->value);
    temp = temp->next;
    index++;
  }

  printf("[[%d]: %d] -> NULL\n", index, temp->value);

  return (index);
}
