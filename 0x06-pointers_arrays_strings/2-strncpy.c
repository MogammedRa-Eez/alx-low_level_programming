#include "main.h"

/**
* _strncpy - copy a string
* @dest: string that will be copied
* @src: string that will be copying
* @n: size of the string
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	for (i = 0 ; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}

