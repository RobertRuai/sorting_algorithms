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
			node->next = sorted;
			st = node;
		}
		else
		{
			ax = st;
			while (aux->next != NULL && aux->next->n <= curr->n)
                                aux = aux->next;

                        if (aux->next == NULL)
                        {
                                aux->next = curr;
                                curr->prev = aux;
                                curr->next = NULL;
                        } else
                        {
                                temp = aux->next;
                                aux->next = curr;
                                curr->prev = aux;
                                curr->next = temp;
                                temp->prev = curr;
                        }
                }

                curr = next;
        }

        *list = sorted;
}
