#include "hash_tables.h"
/**
 * key_index - gives key of index
 * @key: the key
 * @size: size of the array of hash table
 * Return: the index key/value should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
