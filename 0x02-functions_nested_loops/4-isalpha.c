#include "main.h"

/**
 * _islower - Check if a character is lowercase
 * @c: The character to e checked
 * Return: 1 if c is lowercase. 0 otherwise.
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
