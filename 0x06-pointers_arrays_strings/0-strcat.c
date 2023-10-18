#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string with concatenation
* @src: string to be concentenated
* Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i  = 0;
	j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0' && i < 97)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}

