#ifndef _LISTS_H_
#define _LISTS_H_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Structures */
typedef struct Node {
  int value;
  struct Node *next;
  struct Node *prev;

} node_t;

/* Prototypes */
node_t *createNode(int value, node_t *next, node_t *prev);
void appendNode(const node_t *head, node_t *node);
int printLinkedListForward(const node_t *head);
int printLinkedListBackward(const node_t *head, int index);
void freeLinkedList(node_t *head);

#endif /* _LISTS_H_ */
