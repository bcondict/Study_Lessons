#include "main.h"

/**
* createNode - create a new node type node_t
*
* @value: value of the node
* @next: next node of the linked list
*
* Return: the created node
*/
node_t *createNode(int value, node_t *next)
{
  node_t *newNode = NULL;

  newNode = (node_t *) malloc(sizeof(node_t));
  if (!newNode)
  {
    printf("Memmory Error\n");
    return NULL;
  }

  newNode->value = value;
  newNode->next = next;

  return (newNode);
}
