#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: variable to be printed.
 * @src: variable that gets concatenated to dest.
 * @n: number of character to be added to dest without the null terminator.
 * Return: the value of dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (n--)
	{
		if (!(dest[i] == src[j]))
		{
			return (dest);
		}
	}
	dest[i] != '\0';
	return (dest);
}

