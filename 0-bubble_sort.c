#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order
 *
 * @array: character to print
 * @size: character to print
 *
 * Return: 0 success
 */
void bubble_sort(int *array, size_t size)
{
	size_t swapped, i, j, tmp;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
