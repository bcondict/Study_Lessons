#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main (void)
{
  int number; /* 4 bytes */
  char character; /* 1 byte */
  float decimal; /* 4 bytes */
  double longDecimal; /* 8 bytes */
  long longNumber; /* 8 bytes */
  long int longInt; /* 8 bytes */
  long double longDouble; /* 16 bytes */

  char *pChar; /* 8 bytes */
  int *pInt = &number; /* 8 bytes */

  pInt;
  *pInt;

  char string[] = "holas";
  // []  ==  *
  char *pString = string;
  char string2[] = {'h', 'o', 'l', 'a', 's'};
  // char *string2 = {'h', 'o', 'l', 'a', 's'};

  printf("first char is: %c\n", *string);
  printf("first char is: %c\n", *pString);
  printf("first char is: %c\n", string[0]);

  // string++;
  pString++;
  printf("second char is: %c\n", *pString);
  printf("second char is: %c\n", string[1]);


  printf("value of the int variable %d\n", *pInt);
}

/*

*/
