# Linked List

## Objective

The objective for the today's space is:

- Discuss what is a `Linked List`
- Understand how to create a `Linked List`

## Introduction

### Origin and History

The concept of a linked list was first described by Allen Newell, Cliff Shaw, and Herbert A. Simon at the RAND Corporation as part of their work on the Logic Theory Machine, which was an early AI program in mid of 1950s.

Linked list were further popularized by the development of the LISP programming language in 1958, created by John McCarthy. LISP heavily utilized linked list for its primary data structures.

## When and how to use Linked List

- When the number of elements is not known in advance and can change dynamically
- When you need to insert or delete elements frequently, especially in the middle of the list, linked list offer efficient O(1) time complexity for these operations if the node is already known.
- When memory fragmentation is a concern, as linked list allocate memory as needed, rather than requiring a contiguous block like arrays.

See how to declare a linked list in [main.h](./main.h)
See how to use linked list in [linkedList.c](./linkedList.c)

## Exercises

1. Append a Node to the End: Write a function to append a new node with given data to the end of the linked list.
2. Insert a Node at a Specific Position: Write a function to insert a new node with given data at a specific position in the linked list.
3. Delete a Node by Value: Write a function to delete the first node in the linked list that contains a given value.
