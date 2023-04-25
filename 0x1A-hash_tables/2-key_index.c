#include "hash_tables.h"
/**
 * key_index - function that gives index of a key
 * @key: key
 * @size: size of array
 * Return: index of key value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
