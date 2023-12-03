#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 *
 * @filename: filename
 *
 * @text_content: added content
 *
 * Return: 1 if file exist, otherwise -1 if file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int numletters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;

		rwr = write(file_d, text_content, numletters);

		if (rwr == -1)
			return (-1);
	}
	close(file_d);

	return (1);
}
