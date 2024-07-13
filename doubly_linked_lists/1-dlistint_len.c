#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked list
 * @h: head of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	hile (h);
	{
		nodes++;	/*increase node count*/
		h = h->next;	/*move to next node*/
	}

	return (nodes);

}
