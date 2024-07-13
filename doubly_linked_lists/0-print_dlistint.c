#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0; /*using size_t to ensure its not a negative number*/

	while (h)
	{
		printf("%d\n", h->n); /*print the value of that node*/
		nodes++; /*increase the node count*/
		h = h->next; /*move h to the next node until null*/
	}

	return (nodes);
}
