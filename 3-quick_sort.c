#include "sort.h"

/**
 * 
 * 
*/
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * quick_sort
*/
void quick_sort(int *array, size_t size)
{
    int low = 0, high = size - 1, p_index;
    int stack[high - low + 1];/*Create stack for storing subarray boundaries*/
    int top = -1; /* Initialize the top of the stack */
    
    if (size <= 1)
        return; /* Array of size  or 1 is already sorted */

    stack[++top] = low;
    stack[++top] = high;

    while (top >= 0)
    {
        high = stack[top--];
        low = stack[top--];

        p_index = partition(array, low, high);

        if (p_index - 1 > low)
        {
            stack[++top] = low;
            stack[++top] = p_index - 1;
        }

        if (p_index + 1 < high)
        {
            stack[++top] = p_index - 1;
            stack[++top] = low;
        }
    }
}

/**
 * partition - Lomuto partition scheme for choosing the pivot element
 * 
 * @array:
 * @low:
 * @high:
*/
int partition(int *array, int low, int high)
{
    int i = low - 1; /* Initialize the index of the smaller element */
    int pivot = array[high]; /* Chooses the last element to be the pivot */
    int j;

    /* move throught the array and rearrange the elements based on the pivot */
    for (j = low ; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            /* Swap elements if they are smaller than the pivot */
            swap(&array[j], &array[i]);
        }
    }

    /* Swap the pivot into its correct position */
    swap(&array[i + 1], &array[high]);
    return (i + 1); /* Return the index of the pivot element */
}