/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes from src
 *
 * Return: New string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}

		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
