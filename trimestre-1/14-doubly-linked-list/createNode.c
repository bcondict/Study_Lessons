#include "lists.h"

/**
* createNode - Create a new node of the double linked list
*
* @data: data to store in the node
* @next: pointer to the next node
* @prev: pointer to the previous node
*
* Return: A pointer to the new created node
*/
Node_t *createNode(int data, Node_t *next, Node_t *prev)
{
  Node_t *newNode;

  newNode = (Node_t *) malloc(sizeof(Node_t));
  if (!newNode)
  {
    printf("Memory error\n");
    return (NULL);
  }

  newNode->data = data;
  newNode->next = next;
  newNode->prev = prev;

  return (newNode);
}
