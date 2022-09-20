#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: Array of integers
 * @n: Number of items to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i + 1]);
	}
}

