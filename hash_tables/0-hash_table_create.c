#include "hash_tables.h"
/**
 * hash_table_create - makes a hash table with the len of size.
 * @size: is the len of the array.
 * Return: ubication of array or NULL (in case of error).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!htable)
		return (NULL);
	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (!nhtable->array)
	{
		free(htable);
		return (NULL);
	}
	for (; i < size; i++)
	{
		htable->array[i] = NULL;
	}
	return (htable);
}
