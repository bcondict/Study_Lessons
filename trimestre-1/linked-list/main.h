#ifndef _MAIN_H_
#define _MAIN_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>

/* structures */
typedef struct Node {
  int data;
  struct Node *next;

} Node_t;

/* prototypes */
void printList(Node_t *n);
Node_t *createNode(int data, Node_t *next);
void appendNode(int data, Node_t *head);
void insertNodeAtIndex(Node_t *head, Node_t *new_node, int position);

#endif /* _MAIN_H_ */
