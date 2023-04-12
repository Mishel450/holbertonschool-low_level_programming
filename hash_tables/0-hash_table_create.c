#include "hash_tables.h"
/**
 * hash_table_create - makes a hash table with the len of size.
 * @size: is the len of the array.
 * Return: ubication of array or NULL (in case of error).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t ht;

	if (size = NULL)
		return (NULL);
	ht = malloc(sizeof(size) + 1);
	if (ht == '\0')
		return (NULL);
	return (*ht);
}
