#ifndef _MAIN_H_
#define _MAIN_H_

/* Libraries */
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/* Macros */
#define TRUE 1
#define FALSE 0


/* Prototypes */
int check_includes(char *string_array[], int string_array_len, char *string_to_check);
void execute_function(int (*function_pointer)());
int hello();
int goodbye();

int sum(int num_of_args, ...);

#endif /* _MAIN_H_ */
