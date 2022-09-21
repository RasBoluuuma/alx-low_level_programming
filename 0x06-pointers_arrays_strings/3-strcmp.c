/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: The difference between the values of the
 * first pair of characters of the strings being compared
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	diff = s1[0] - s2[0];
	return (diff);
}
