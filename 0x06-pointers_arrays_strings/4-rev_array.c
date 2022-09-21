/**
 * reverse_array - Reverses array
 * @a: Pointer to an array of integers
 * @n: Number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int *tmp = a;

	n -= 1;
	for (i = 0; i <= n; i++)
	{
		a[n - i] = tmp[i];
	}
}
