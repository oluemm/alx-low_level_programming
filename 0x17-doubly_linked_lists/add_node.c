#include "lists.h"
/**
  * print_dlistint - prints a doubly linked list
  * @h: Head of the list
  * Return: Number of items in the linked list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = *head;
new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
*head = new_node;

return (new_node);
}
/*  head->n == NULL
    head->prev == NULL
    head->next == NULL

    new_node->n == n
    new_node->prev == NULL
    new_node->next == head
    */

