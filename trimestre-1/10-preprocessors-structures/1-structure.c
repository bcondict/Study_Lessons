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

  alice.age = 15;
  alice.name = "Carlos";
  printPerson(alice);

  return (0);
}

/**
 * printPerson - Prints a Person struct
 *
 * @person: Person to print
 */
void printPerson(Person person)
{
  printf("Name: %s\n", person.name);
  printf("Age: %d\n", person.age);
}
