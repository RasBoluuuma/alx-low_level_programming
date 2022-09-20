#include "assets.c"
/**
 * _puts - Prints string to standard output
 * @str: Steing to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}

