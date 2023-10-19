#include "main.h"

/**
* string_toupper - change all lowercase strings to uppercase
* @s: analysed string
* Return: string with all uppercased letters
*/

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) = *(s + i) - 32;
		i++;
	}
	return (s);
}

