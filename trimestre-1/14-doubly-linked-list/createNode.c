#include "lists.h"

/**
 * createNode - Create a node of a double linked list
 * type node_t
 *
 * @value: value to store in the node
 * @next: pointer to the next node
 * @prev: pointer to the prev node
 *
 * Return: the created node
 */
node_t *createNode(int value, node_t *next, node_t *prev) {
  node_t *newNode = NULL;

  newNode = (node_t *)malloc(sizeof(node_t));
  if (!newNode) {
    printf("Memmory error\n");
    return (NULL);
  }

  newNode->value = value;
  newNode->next = next;
  newNode->prev = prev;

  return (newNode);
}
