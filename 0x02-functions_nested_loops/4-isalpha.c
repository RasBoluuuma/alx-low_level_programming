#include "main.h"

/**
 * _isalpha - Check if a character is lowercase
 * @c: The character to e checked
 * Return: 1 if c is a letter. 0 otherwise.
 */
int _isalpha(int c)
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
