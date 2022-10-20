#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht; /*creating a hashtable datatype*/
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t)); /*allocating memory space*/
	if (ht == NULL)					   /*check if the mem allocation failed*/
		return (NULL);				   /*return NULL*/

	ht->size = size; /*szie of the array to be created*/
	/*assigning mem space based of on given array size*/
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL) /*check if the mem allocation failed*/
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL; /*store NULL vals in each index of the array*/

	return (ht);
}
