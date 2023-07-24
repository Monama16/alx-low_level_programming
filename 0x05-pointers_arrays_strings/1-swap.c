#include "main.h"
/**
 * swap_int - swaps the value of int a and int b
 * @a: int 1
 * @b: int 2
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
