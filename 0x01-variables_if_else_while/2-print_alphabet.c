#include <stdio.h>

/**
* main - prints lowercase letter
* Description: uses putchar
* Return: 0
*/
int main(void)
{
	char ch0;

	for (ch0 = 'a'; ch0 <= 'z'; ch0++)
	{
		putchar(ch0);
	}
	putchar('\n');
	return (0);
}
