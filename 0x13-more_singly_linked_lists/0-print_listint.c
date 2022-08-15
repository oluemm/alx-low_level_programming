#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int itr = 0;

	while (h)
	{
		if (!h->n) /*check if node is NULL*/
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next; /*move to next node*/
		itr++;
	}
	return (itr);
}
