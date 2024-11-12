#include "lists.h"

/**
 * appendNode - append a node type node_t to the end of the linked list
 *
 * @head: head node of the linked list
 * @node: node to append to the linked list
 *
 * Return: nothing
 */
void appendNode(const node_t *head, node_t *node) {
  node_t *temp = (node_t *)head;

  while (temp && temp->next)
    temp = temp->next;

  temp->next = node;
  node->prev = temp;
}
