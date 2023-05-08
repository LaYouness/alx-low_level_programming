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
/**
 * main - copies the contents of a file to another file.
 * @argc: num of args
 * @argv: args
 * Return: 0
 * incorrect argument count - exit code 97.
 * file_from not exist || cannot be read - exit code 98.
 * file_to cannot be created or written to - exit code 99.
 * file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = cbuf(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	_close(from);
	_close(to);

	return (0);
}
