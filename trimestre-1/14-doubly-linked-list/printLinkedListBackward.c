#include "lists.h"

/**
 * printLinkedListBackward - print the linked list with node type node_t
 * from the tail to the head
 *
 * @tail: tail node type node_t of the linked list
 *
 * @Return: size of the linked list
 */
int printLinkedListBackward(const node_t *head, int index) {
  int value = 0;
  if (!head->next) {
    printf("NULL <- [[%d]: %d]", index, head->value);
    return (index++);
  }

  value = printLinkedListBackward(head->next, index + 1);
  printf(" <- [[%d]: %d]", index, head->value);
  if (index == 0)
    printf("\n");

  return (value);
}
