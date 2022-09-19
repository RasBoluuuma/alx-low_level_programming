#include <stdio.h>
/**
 * _strlen - Find the length of a string
 * @s: The string to be checked
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
