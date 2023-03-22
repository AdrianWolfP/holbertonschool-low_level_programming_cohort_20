#include "main.h"
/**
 * create_buffer - allocates 1024 bytes
 * @f: name of file buffer
 * Return: pointer to allocated bytes
 */

char *create_buffer(char *f)
{
	char *buffer;
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes file
 * @fd: file descriptor that'll be closed
 */
void close_file(int fd)
{
	int c;
	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents of file to another
 * @argc: number of ar
