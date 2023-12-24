#include "hash_tables.h"

i/**
 * key_index - get index for key given
 * @key: key (string) to hash
 * @size: hash table size
 *
 * Return: index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
