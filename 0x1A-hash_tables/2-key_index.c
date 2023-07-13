#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: the key, a string.
 * @size: the size
 *
 * Return: Index number for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
