#include "assets.c"
/**
 * print_rev - Prints a string in reverse
 * @s: String to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l = _strlen(s);

	while (l >= 0)
	{
		_putchar(*(s + l));
		l--;
	}
}
