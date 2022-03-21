#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: variable used.
 */
void rev_string(char *s)
{
	int i, j;
	int len = 0;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	j = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j--] = tmp;
	}
}

