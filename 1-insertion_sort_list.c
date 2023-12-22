#include "sort.h"
/**
 * insertion_sort_list - sorts insertions
 * @list: pointer to the head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cnode = NULL, *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	cnode = *list;
	cnode = cnode->next;
	while (cnode)
	{
		while (cnode->prev && cnode->n < (cnode->prev)->n)
		{
			temp = cnode;
			if (cnode->next)
				(cnode->next)->prev = temp->prev;
			(cnode->prev)->next = temp->next;
			cnode = cnode->prev;
			temp->prev = cnode->prev;
			temp->next = cnode;
			if (cnode->prev)
				(cnode->prev)->next = temp;
			cnode->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
			cnode = cnode->prev;
		}
		cnode = cnode->next;
	}
}

