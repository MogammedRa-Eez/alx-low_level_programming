#include "main.h"

/**
 * read_textfile - reads a text file and prints it to a POSIX stdo
 *
 * @filename: name of the file to read
 *
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lenr, lenw;
	int file_d;
	char *file

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	if (file == NULL)
	{
		close(file_d);
		return (0);
	}
	lenr = read(file_d, file, letters);
	close(file_d);
	if (lenr == -1)
	{
		free(file);
		return (0);
	}
	lenw = write(STDOUT_FILENO, file, lenr);
	free(file);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
