#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be capitalized.
* Return: string with all capitalised words
*/

char *cap_string(char *str)
{
	int ptr = 0;

	while (*(str + ptr))
	{
		while (!(*(str + ptr) >= 'a' && *(str + ptr) <= 'z'))
			ptr++;
		if (*(str + ptr - 1) == ' ' ||
				*(str + ptr - 1) == '\t' ||
				*(str + ptr - 1) == '\n' ||
				*(str + ptr - 1) == ',' ||
				*(str + ptr - 1) == ';' ||
				*(str + ptr - 1) == '.' ||
				*(str + ptr - 1) == '!' ||
				*(str + ptr - 1) == '?' ||
				*(str + ptr - 1) == '"' ||
				*(str + ptr - 1) == '(' ||
				*(str + ptr - 1) == ')' ||
				*(str + ptr - 1) == '{' ||
				*(str + ptr - 1) == '}' ||
				ptr == 0)
			*(str + ptr) -= 32;
		ptr++;
	}
	return (str);
}

