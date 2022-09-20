/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *init = s;
	char *last = s;
	char tmp;
	int count = 0;
	int i;

	if (*s != '\0')
	{
		while (*(s + count) != '\0')
		{
			last++;
			count++;
		}
		last--;

		for (i = 0; i < (count / 2); i++)
		{
			tmp = *last;
			*last = *init;
			*init = tmp;

			init++;
			last--;
		}
	}
}
