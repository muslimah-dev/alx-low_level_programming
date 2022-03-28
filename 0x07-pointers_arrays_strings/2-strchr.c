#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer to the null-terminated byte string.
 * @c: character to search for.
 * Return: successfully returns postition of the first occurrence of c
 * otherwise returns null.
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == (char) c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
