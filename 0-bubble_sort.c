#include "sort.h"
/**
 * bubble_sort - Performs a bubble sort on an array
 * @array: unsorted array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	int swappped = 0;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swappped = 1;
				print_array(array, size);
			}
		}
		if (swappped == 0)
			break;
	}
}
