#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, c, l = 0, d = 0;

	for (i = 0; i < size; i++)
	{
		c = (i * size) + i;
		l += *(a + c);
	}
	for (j = 0; j < size; j++)
	{
		c = (j * size) + (size - 1 - j);
		d += *(a + c);
	}
	printf("%i, %i\n", l, d);
}
