#include "assets.h"
/**
 * puts_half - Prints half of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}

	for (j = n - 1; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
