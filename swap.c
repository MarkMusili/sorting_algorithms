#include "sort.h"

/**
 * swap - function that swaps the position of two integers
 *
 * @a: Pointer to the firs integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
