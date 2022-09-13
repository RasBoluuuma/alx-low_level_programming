#include "main.h"

/**
 * print_alphabet_x10 - Print all the alphabets in lowercas ten times
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0, i < 10, i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
