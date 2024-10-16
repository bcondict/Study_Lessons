#ifndef _MAIN_H_
#define _MAIN_H_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Macros */
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define PI 3.14159

/* Structures */
// struct newStruct {
//   char *name;
//   int age;
// };
//
// typedef struct newStruct Person ;
typedef struct newStruct {
  char *name;
  int age;
} Person;

/* Prototypes */
void printPerson(Person person);

#endif /* _MAIN_H_ */
