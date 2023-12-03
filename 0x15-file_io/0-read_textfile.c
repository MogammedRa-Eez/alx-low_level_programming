#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints it to a POSIX
 * @filename: variable pointer
 * @letters: size letters
 *
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t text, let, w;
	char *file;

	file  = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, w);

	w = write(STDOUT_FILENO, file, let);

	close(file);

	return (w);
}
