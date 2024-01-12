#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nElement;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (nElement == NULL)
		return (NULL);

	nElement->n = n;
	nElement->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nElement->next = h;

	if (h != NULL)
		h->prev = nElement;

	*head = nElement;

	return (nElement);
}
