#ifndef _MAIN_H_
#define _MAIN_H_

/* Libraries */
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/* Prototypes */
int check_includes(char *string_array[], char *string_to_check);
void hello();
void say_goodbye();
void greet(void (*func)());
int sum(int num, ...);

#endif // !_MAIN_H_
