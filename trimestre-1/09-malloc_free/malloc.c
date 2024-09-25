#include "main.h"

/**
* main - convert the argument vector into an array of integers
*
* print the array of intergers
*
* @argc: count of the arguments
* @argv: argument vector passed by the user
*
* Return: 0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{
	int i = 0, numberToSave = 0;
	int *arrayOfIntegers = NULL;

	if (argc < 2)
	{
		printf("usage: ./malloc <numbers>\n");
		return (1);
	}

	arrayOfIntegers = (int *) malloc(sizeof(int) * argc - 1);
	if (arrayOfIntegers == NULL)
	{
		printf("Memmory allocation failed\n");
		return (1);
	}

	for (i = 0; i < argc - 1; i++)
	{
		numberToSave = atoi(argv[i + 1]);
		if (numberToSave == 0 && strcmp(argv[i + 1],  "0") != 0)
		{
			printf("Error on the argument input\nusage: ./malloc <numbers>\n");
			free(arrayOfIntegers);
			return (1);
		}
		arrayOfIntegers[i] = numberToSave;
	}

	for (i = 0; i < argc - 1; i++)
	{
		printf("arrayOfIntegers[%d] = %d\n", i, arrayOfIntegers[i]);
	}

	free(arrayOfIntegers);

	return (0);
}
