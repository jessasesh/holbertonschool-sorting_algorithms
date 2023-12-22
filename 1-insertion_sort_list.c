#include "sort.h"
/**
 * insertion_sort_list - sorts insertions
 * @list: pointer to the head of list
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;

	while (current)
	{
		listint_t *temp = current->next;

		while (current->prev && current->n < current->prev->n)
		{
			listint_t *prev = current->prev;
			listint_t *next = current->next;

			if (next)
				next->prev = prev;

			prev->next = next;
			current->prev = prev->prev;
			current->next = prev;

			if (prev->prev)
				prev->prev->next = current;
			else
				*list = current;

			prev->prev = current;
			print_list(*list);
		}
		current = temp;
	}
}
