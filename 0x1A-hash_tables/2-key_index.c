#include "hash_tables.h"

/**
 * key_index - function that generates  index
 * according to  hash
 *
 * @key: key
 * @size: size of ht
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
