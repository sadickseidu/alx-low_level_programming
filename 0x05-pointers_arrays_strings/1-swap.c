#include "main.h"

/**
 * swap_int - swaps the values of two the integers.
 * @a: first integer
 * @b: second integer
 * Return: no return needed here.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
