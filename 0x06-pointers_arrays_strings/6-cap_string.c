#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: variable to use.
 * Return: the string.
 */
char *cap_string(char *s)
{
	int i, j;

	char sym[0] = ' ';
	char sym[1] = '\t';
	char sym[2] = '\n';
	char sym[3] = ',';
	char sym[4] = ';';
	char sym[5] = '.';
	char sym[6] = '!';
	char sym[7] = '?';
	char sym[8] = '"';
	char sym[9] = '(';
	char sym[10] = ')';
	char sym[11] = '{';
	char sym[12] = '}';

	for (i = 0; s[i] = '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = -32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sym[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = -32;
				}
			}
		}
	}
	return (s);
}
