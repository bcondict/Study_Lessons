#include "main.h"

/**
 * createNode - create a new node
 *
 * @data: data to be added to the new node
 * @next: pointer to the next node
 * Return: pointer to the new node
*/
Node_t *createNode(int data, Node_t *next)
{
  Node_t *newNode = NULL;

  newNode = (Node_t *) malloc(sizeof(Node_t));
  if (!newNode)
  {
    printf("Memory Error\n");
    return (NULL);
  }

  newNode->data = data;
  newNode->next = next;

  return newNode;
}

