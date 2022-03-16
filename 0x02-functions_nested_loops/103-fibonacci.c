#include <stdio.h>

/**
 * main - prints the sum of fibonacci numbers less than 4000000
 * Return: 0, success
 */
int main(void)
{
	int i;
	unsigned long int j, k, sum, next;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
