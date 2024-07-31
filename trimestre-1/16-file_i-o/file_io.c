#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 on success, 1 on error;
 */
int main(int argc, char *argv[]) {
	int fd = 0;
	char *message = NULL;
	ssize_t bytes_written = 0;

	fd = open("output.txt", O_CREAT | O_WRONLY, 0644);
	if (fd == -1) {
		perror("open\n");
		return (1);
	}

	if (argc < 2)
	{
		printf("usage: ./file_io <message>");
		return (1);
	}
	message = argv[1];
			
	bytes_written = write(fd, message, strlen(message));
	if (bytes_written == -1) {
		perror("write\n");
		return (1);
	}

	dprintf(fd, "Farmatted number: %d\n", 123);

	if (close(fd) == -1) {
		perror("close\n");
		return (1);
	}

	printf("Data written into the file output.txt\n");
	return (0);
}
