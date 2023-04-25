#include "sort.h"

/**
 * insertion_sort_list -sorts doubly linked list i ascending order
 *
 * @list: character to print
 *
 *
 * Return: 0 success
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node;
	listint_t *nxt, *ax, *st, *tmp;

	node = *list;
	st = NULL;

	while (node != NULL)
	{
		nxt = node->next;
		if (st == NULL || st->n > node->n)
		{
			node->next = st;
			st = node;
		}
		else
		{
			ax = st;
			while (ax->next != NULL && ax->next->n <= node->n)
				ax = ax->next;

			if (ax->next == NULL)
			{
				ax->next = node;
				node->prev = ax;
				node->next = NULL;
			} else
			{
				tmp = ax->next;
				ax->next = node;
				node->prev = ax;
				node->next = tmp;
				tmp->prev = node;
			}
		}

		node = nxt;
	}

	*list = st;
}
