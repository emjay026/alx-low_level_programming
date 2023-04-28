#include "lists.h"

/**
* list_len - function that returns the number of elements
* in a linked list_t list.
* @h: linked list node.
*
* Return: length of list.
*/
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
