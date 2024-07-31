#ifndef _MAIN_H_
#define _MAIN_H_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Macros */
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define PI 3.14159

/* Structures */
typedef struct newStruct {
  char *name;
  int age;
} Person;

/* Prototypes */
void printPerson(Person person);

#endif /* _MAIN_H_ */
