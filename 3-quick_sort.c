#include "sort.h"


/**
 * swap -  swaps the two indexes
 *
 * @a: character to print
 * @b: character to print
 *
 * Return: 0 success
 */

void swap(int *a, int *b)
{
	int tmp  = *a;
	*a = *b;
	*b = tmp;
}


/**
 * part - partitions the array using elements as pivots
 *
 * @array: character to print
 * @low: character to print
 * @high: character to print
 * @size: character to print
 * Return: 0 success
 */

int part(int *array, int low, int high, int size)
{
	int pv = array[high];
	int j, i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pv)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}


/**
 * sort - implements quicksort to the array of integers
 *
 * @array: character to print
 * @low: character to print
 * @high: character to print
 * @size: character to print
 *
 * Return: 0 success
 */

void sort(int *array, int low, int high, size_t size)
{
	int pt;

	if (low < high)
	{
		pt = part(array, low, high, size);
		sort(array, low, pt - 1, size);
		sort(array, pt + 1, high, size);
	}
}

/**
 * quick_sort - sorts array of integers in ascending order
 *
 * @size: character to print
 * @array: character to print
 *
 * Return: 0 success
 */

void quick_sort(int *array, size_t size)
{
	int low, high;

	low = 0;
	high = size - 1;

	if (array)
		sort(array, low, high, size);
}
