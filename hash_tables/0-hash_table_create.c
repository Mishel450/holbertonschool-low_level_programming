#include "hash_tables.h"
/**
 * hash_table_create - makes a hash table with the len of size.
 * @size: is the len of the array.
 * Return: ubication of array or NULL (in case of error).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht[size];

	if (ht == NULL)
		return (NULL);
	return (&ht);
}
