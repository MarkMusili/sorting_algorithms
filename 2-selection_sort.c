#include "sort.h"
#include "swap.c"

/**
 * selection_sort - The selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;

	if (array == NULL || size < 2)
		return; /* Nothing to sort */

	for (i = 0; i < size - 1; i++)
	{
		idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				idx = j;
		}

		swap(&array[i], &array[idx]);
		print_array(array, size);
	}
}
