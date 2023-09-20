#include "main.h"

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s)
{

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (s[j] == a[i])
				s[j] = b[i];
		}
	}

	return (s);
}
