#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of an array of int
 * followed by a new line..
 * @a: variable to be used.
 * @n: number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		} else
			printf(", %d", a[i]);
	}
	printf("\n");
}
