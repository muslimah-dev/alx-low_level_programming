#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase.
 * @s: variable used.
 * Return: 0
 */
char *string_toupper(char *s[])
{
	int c = 0;

	while (*s[c] != '\0')
	{
		if (*s[c] >= 'a' && *s[c] <= 'z')
		{
			*s[c] = *s[c] - 32;
		}
		c++;
	}
}
