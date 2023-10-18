#include "main.h"

/**
* _strncpy - copy a string
* @dest: string that will be copied
* @src: string that will be copying
* @n: size of the string
* Return: Always 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		*(dest + j) = *(src + j);
	
	for ( ; j < n; j++)
		*(dest + j) = '\0';

	return (dest);
}

