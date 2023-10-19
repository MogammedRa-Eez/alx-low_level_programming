#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @a: The string to be capitalized.
* Return: string with all capitalised words
*/

char *cap_string(char *a)
{
	int i, j;
	char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (*(a + i) != '\0')
	{
		if (*(a + i) >= 's' && *(a + i) <= 'z')
		{
			if (i == 0)
			{
				*(a + i) = *(a + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (s[j] == *(a + i - 1))
					{
						*(a + i) = *(a + i) - 32;
					}
				}
			}
		}
	i++;
	}
	return (a);
}

