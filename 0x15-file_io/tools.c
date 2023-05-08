#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cbuf - alloc 1024 bytes buffer
 * @file: file where buff is used
 *
 * Return: new buff
 */
char *cbuf(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * _close - Closes fd
 * @fd: The fd to be closed.
 */
void _close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
