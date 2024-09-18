#include <stdio.h>
#include <string.h>

int main(__attribute__((unused)) int argc, char *argv[])
{

	if (strcmp(argv[1], "-list") == 0)
	{
		printf("server 1: 168.98.105.1\n");
		return (0);
	}

	printf("%s\n", argv[1]);
	return (0);
}
