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
 * insertion_sort_list - sorts an array of ints with dlinked list
 * @list: head node of the doubly linked list
 * return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;

	while (current->next != NULL)
	{
		if (current > current->next)
		{
			current->next = current->prev;
			current->prev->prev = current->prev;
			
				
		}


	}
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
