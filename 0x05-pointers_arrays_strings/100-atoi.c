#include "main.h"

/**
 * _atoi - function that convert a string to an int.
 * @s: variable to use.
 * Return: the int from the string.
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
	}
	if (s[i] >= '0' && s[i] <= '9')
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; ++i)
	{
		res = res * 10 + s[i] - '0';
	}
	return (sign + res);
}
