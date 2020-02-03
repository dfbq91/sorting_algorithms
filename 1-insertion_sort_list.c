#include "sort.h"

/**
 * insertion_sort_list - sorts an array of ints with dlinked list
 * @list: head node of the doubly linked list
 * return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next, *prev, *next;

	if (*list == NULL)
		return;

	if (**list == NULL)
		return;

	if (list->next == NULL)
		return;

	while (current)
	{
		if (current->prev && current->n < current->prev->n)
		{
			while (current->prev)
			{
				prev = current->prev;
				if (current->prev && current->n < current->prev->n)
				{
					if (current->prev->prev)
						current->prev->prev->next = current;
					next = current->next;
					current->prev->next = next;
					if (next)
						next->prev = current->prev;
					current->next = prev;
					if (prev)
					{
						current->prev = prev->prev;
						prev->prev = current;
					}
					else
						current->prev = prev;
					if (!current->prev)
						*list = current;
					print_list(*list);
				}
				else
					break;
			}

		}
		current = current->next;
	}
}
