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
		return;

	for (i = 0 ; i < size ; i++)
	{
		idx = i;

		for (j = i + 1 ; j < size ; j++)
			idx = j;

		if (&array[idx] != &array[i])
		{
			swap(&array[idx], &array[i]);
			print_array(array, size);
		}
	}

}
