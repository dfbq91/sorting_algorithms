#include "sort.h"

/**
 * selection_sort - sorts an array of integers with selection algorithm
 * @array: integers to be ordered
 * @size: size of array
 * return: nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, index;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		temp = array[i];
		index = i;
		for (j = i + 1; j < size; j++)
		{

			if (temp > array[j])
			{
				temp = array[j];
				index = j;
			}
		}
		array[index] = array[i];
		array[i] = temp;
		if (i != index)
			print_array(array, size);
	}
}
