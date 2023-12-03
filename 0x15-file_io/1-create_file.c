#include "main.h"

/**
 * create_file - program creates a file
 *
 * @filename: filename
 *
 * @text_content: content written in the file
 *
 * Return: 1 if success. -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;
	int numletters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numletters = 0; text_content[numletters]; numletters++)
		;

	rwr = write(file_d, text_content, numletters);

	if (rwr == -1)
		return (-1);

	close(file_d);

	return (1);
}
