#include "sort.h"

/**
 * swap - swaps the values of two integers
 * @number_one: pointer to the first value
 * @number_two: pointer to the second value
 * return: nothing
 */
void swap(int *number_one, int *number_two)
{
	int aux;

	aux = *number_one;
	*number_one = *number_two;
	*number_two = aux;
}


/**
 * quick_sort - sort an array of integers
 * @array: the array
 * @size: size of the array
 * return: nothing
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}

/**
 * qs - sort an array of integers using recursion
 * @array: the array
 * @low: size of the array
 * @high: 
 * return: nothing
 */
void qs(int *array, int low, int high, int size)
{
	int pivot;
	if (low < high)
	{
		pivot = partition(array, low, high, size);
		qs(array, low, pivot - 1, size);
		qs(array, pivot + 1, high, size);
	}
}

int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for(j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}

		}
	}
	if (i + 1 != high)
	{
		swap(&(array[i + 1]), &array[high]);
		print_array(array, size);
	}
	return(i + 1);
}
