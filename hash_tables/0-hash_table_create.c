#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 * Return: pointer to the hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;	/*create hash table*/
	unsigned long int i;	/*iterator*/

	ht = malloc(sizeof(hash_table_t));	/*allocate memory for hash table*/

	if (ht == NULL)	/*case of null*/
	{
		return (NULL);
	}

	ht->size = size;	/*size equals variable size*/
	ht->array = malloc(sizeof(hash_node_t *) * size);
	/*make space for the array*/

	if (ht->array == NULL)	/*if array empty*/
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;	/*add null to each spot to create the table*/
	}

	return (ht);
}
