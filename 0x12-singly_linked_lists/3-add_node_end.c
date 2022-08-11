#include "lists.h"
/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strdup - recreation of string duplicate function
 * @src: source of string to duplicate
 * Return: pointer to malloc'd space with copied string
 */
void *_strdup(const char *src)
{
	int len, i;
	char *dest;

	len = _strlen(src);
	/*alloc a mem space for string to be copied*/
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL) /*if alloc fails, return NULL*/
		return (NULL);
	for (i = 0; src[i]; i++)
		/*loop thru chars of given string @src and copy them to @dest*/
		dest[i] = src[i];
	dest[i] = '\0'; /*append the end of string null-byte*/
	return (dest);
}

/**
 * add_node_end - add new nodes to the end of the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current; /*create 2 vars of type list_t*/
	char *dupstr;		   /*create a string ptr*/

	if (str == NULL) /*check if string @str is NULL*/
		return (NULL);
	dupstr = _strdup(str); /*copy string @str to new var @dupstr*/
	if (dupstr == NULL)	   /*check if string @dupstr is NULL*/
		return (NULL);
	new = malloc(sizeof(list_t)); /*assign mem space of size list_t*/
	if (new == NULL)			  /*check if NODE @new is NULL*/
		return (NULL);
	new->str = dupstr;
	new->len = _strlen(str);
	new->next = NULL; /*new list points to NULL i.e. it is the last*/

	if (*head == NULL) /*check if head is NULL*/
	{
		*head = new; /*make newly added NODE bcom head*/
		return (*head);
	}
	current = *head;
	while (current->next != NULL) /*if ptr in current is not NULL*/
		current = current->next;  /*move to the next*/
	current->next = new;		  /*add new NODE to the end of the list*/
	return (*head);
}
