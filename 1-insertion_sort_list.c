#include "sort.h"

void swap_nodes(listint_t **list, listint_t *a, listint_t *b);

/**
 * insertion_sort_list - sorts a double linked list of integers,
 * in ascending order.
 * @list: head node of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current;

	current = (*list)->next;

	if (*list == NULL || (*list)->next == NULL)
	{
		return;
	}

	while (current != NULL)
	{
		temp = current->prev;

		while (temp != NULL && temp->n > current->n)
		{
			if (temp->prev != NULL)
				temp->prev->next = current;
			else
				*list = current;
			if (current->next != NULL)
				current->next->prev = temp;

			temp->next = current->next;
			current->prev = temp->prev;
			current->next = temp;
			temp->prev = current;

			temp = current->prev;
			print_list(*list);
		}
		current = current->next;
	}
}

