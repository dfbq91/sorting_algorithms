#include "sort.h"

/**
 * cocktail_sort_list - sorts an array of ints with dlinked list
 * @list: head node of the doubly linked list
 * return: nothing
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	int limR = 0, limL = 0, counter = 0, flag = 0;

	if (list == NULL || *list == NULL || ((*list)->next == NULL))
		return;
	current = *list;
	while ((current = current->next) != NULL)
		limR++;
	current = *list;
	while (limL != limR)
	{
		if (flag == 0)
		{
			if (current->next == NULL || counter > limR)
			{
				flag = 1;
				limR--;
				continue;
			}
			if (current->n > current->next->n)
				swap_llist(current, current->next, list);
			else
				current = current->next;
			counter++;
		}
		if (flag == 1)
		{
			if (current->prev == NULL  || counter < limL)
			{
				flag = 0;
				limL++;
				continue;
			}
			if (current->n < current->prev->n)
				swap_llist(current->prev, current, list);
			else
				current = current->prev;
			counter--;
		}
	}
}

/**
 * swap_llist - swaps two elements of a doubly linked list
 * @first: element to be swapped
 * @second: element to be swapped
 * @list_head: head node of the doubly linked list
 * return: nothing
 */

void swap_llist(listint_t *first, listint_t *second, listint_t **list_head)
{
	first->next = second->next;
	if (first->prev != NULL)
		first->prev->next = second;

	second->prev = first->prev;
	first->prev = second;

	if (second->next != NULL)
		second->next->prev = first;

	second->next = first;

	if (second->prev == NULL)
		(*list_head) = second;

	print_list(*list_head);
}
