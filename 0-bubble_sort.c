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
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: Array to be sorted
 * @size: The list to be printed
 * return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size <= 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&(array[j]), &(array[j + 1]));
				print_array(array, size);
			}
		}
	}
}
