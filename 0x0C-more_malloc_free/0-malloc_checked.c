#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc
* @b: allocated memory
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *output;

	output = malloc(b);
	if (output == NULL)
	{
		exit(98);
	}
	return (output);
}

