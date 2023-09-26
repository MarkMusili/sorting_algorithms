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

/**
 * quick_sort - Implementation of quick sort algorithm
 * 
 * @array: Pointer to the input array
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size <= 1)
        return;

    quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - Recursive function for custom quicksort
 * 
 * @array: Pointer to the input array
 * @start: The stating index of the subarray
 * @end: the ending index of the subarray
 * @size: Number of elements in @array
*/
void quick_sort_recursive(int *array, ssize_t start, ssize_t end, ssize_t size)
{
    ssize_t p_index;

    if (start < end)
    {
        p_index = partition(array, start, end, size);

        quick_sort_recursive(array, start, p_index - 1, size);
        quick_sort_recursive(array, p_index + 1, end, size);
    }
}

/**
 * partition - Lomuto partition scheme for choosing the pivot element
 * 
 * @array: Pointer to the input array
 * @start: The starting index of the partition
 * @end: The ending index of the partition
 * @size: Number of elements in @array
 * 
 * Return: Index of the pivot after partitioning
 */
int partition(int *array, ssize_t start, ssize_t end, ssize_t size)
{
	int pivot = array[end];
    ssize_t low = start - 1, high;

	/* move throught the array and rearrange the elements based on the pivot */
	for (high = start ; high < end ; high++)
	{
		if (array[high] <= pivot)
		{
			low++;
			/* Swap elements if they are smaller than the pivot */
            if (low != high)
            {
                swap(&array[low], &array[high]);
                print_array(array, size);
            }
		}
	}

    if (low + 1 != end)
    {
        swap(&array[low + 1], &array[end]);
        print_array(array, size);
    }

    return (low + 1);
}
