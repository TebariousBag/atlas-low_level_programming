#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: singly linked list
 * Return: number of elements in a list
 */


size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
