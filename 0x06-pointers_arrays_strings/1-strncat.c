#include "main.h"

/**
* _strncat - concatenate two strings
* @dest: string with concatenation
* @src: string to be concatenated
* @n: size of second string
* Return: Always 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n && i < 97 && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}

