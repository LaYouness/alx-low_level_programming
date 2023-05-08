#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: num of letters to read
 * Return: returns the actual number of letters it could read and print
 * 0 when fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fd, r, w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	r = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, r);

	free(b);
	close(fd);
	return (w);
}
