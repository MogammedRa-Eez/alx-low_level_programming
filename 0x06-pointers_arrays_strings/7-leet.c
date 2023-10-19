#include "main.h"

/**
* leet - encode into 1337
* @s: analyzed string
* Return: string with vowels changed
*/

char *leet(char *s)
{
	int i, j;
	char p1[] = "aAeEoOtTlL";
	char p2[] = "4433007711";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == p1[j])
			{
				*(s + i) = p2[j];
			}
		}
	}
	return (s);
}

