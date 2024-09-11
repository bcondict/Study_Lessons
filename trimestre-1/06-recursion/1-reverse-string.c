#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *reverseString(char *string, int start, int end)
{
	char tmp = '\0';
	if (start >= end)
		return string;

	tmp = string[start];
	string[start] = string[end];
	string[end] = tmp;

	return (reverseString(string, start + 1, end - 1));
}

/**
* main - Entry point
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int string_len = 0;
	char *string;

	if (argc < 2)
	{
		printf("Usage: ./a.out ${string to reverse}");
		return (0);
	}

	string = strdup(argv[1]);
	string_len = strlen(string);

	printf("string before reverse: %s\n", string);
	reverseString(string, 0, string_len - 1);
	printf("string after reverse: %s\n", string);

	free(string);
	return (0);
}
