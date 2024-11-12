#include "lists.h"

/**
 * main - entry point, function that create a double linked lists
 *
 * Return: 0 on success, 1 otherwise
 */
int main(void) {
  node_t *head = NULL;
  node_t *second = NULL;
  node_t *third = NULL;
  int elements = 0;

  head = createNode(10, NULL, NULL);
  second = createNode(11, NULL, NULL);
  third = createNode(12, NULL, NULL);
  if (!head || !second || !third) {
    printf("Error while creating the node\n");
    return (1);
  }

  appendNode(head, second);
  appendNode(head, third);

  printf("Forward: ");
  elements = printLinkedListForward(head);
  printf("Elements: %d\n", elements);

  printf("Backward: ");
  elements = printLinkedListBackward(head, 0);
  printf("Elements: %d\n", elements);

  freeLinkedList(head);

  return (0);
}
