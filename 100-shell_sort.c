#include "sort.h"

/**
 * shell_sort - sort the values of an array using shell sort
 * @array: array to be ordered
 * @size: number of elements in array
 * return: nothing
 */

void shell_sort(int *array, size_t size)
{
	unsigned int n, i, gap = 1;
	int number;
	while (gap < size / 3)
	{
		gap = 3 * gap + 1;
	}
	while (gap > 0)
	{
		for (i = gap; i < size; i += gap)
		{
			for (n = i; n > 0 && array[n] < array[n-gap]; n -= gap)
			{
				number = array[n];
				array[n] = array[n-gap];
				array[n-gap] = number;
			}
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
