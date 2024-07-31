#ifndef _LISTS_H_
#define _LISTS_H_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Structures */
typedef struct Node_s {
  int data;
  struct Node_s *next;
  struct Node_s *prev;
} Node_t;

/* Prototypes */
Node_t *createNode(int data, Node_t *next, Node_t *prev);
void appendNode(Node_t *head, Node_t *node);
Node_t *printListForward(Node_t *tail);
Node_t *printListBackward(Node_t *tail);

#endif /* _LISTS_H_ */
