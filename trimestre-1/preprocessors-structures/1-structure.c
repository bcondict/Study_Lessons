#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  Person alice = {"Alice", 30};

  printPerson(alice);

  return (0);
}

/**
 * printPerson - Prints a Person struct
 * @person: Person to print
 */
void printPerson(Person p)
{
  printf("Name: %s\n", p.name);
  printf("Age: %d\n", p.age);
}
