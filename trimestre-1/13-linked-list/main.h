#ifndef _MAIN_H_
#define _MAIN_H_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Structures */
typedef struct Node {
  int value;
  struct Node *next;
} node_t;

/* Prototypes */
node_t *createNode(int value, node_t *next);
void appendNode(const node_t *head, int value);
void printLinkedList(const node_t *head);
void insertNodeAtIndex(const node_t *head, node_t *node, int index);
void freeLinkedList(node_t *head);

#endif /* _MAIN_H_ */
