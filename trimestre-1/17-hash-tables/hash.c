#include "main.h"
#include <limits.h>

/**
* hash - hash function to map a key to an index in the hash table
*
* @key: key to map
* @size: size of the hash 
*/
unsigned int hash(const char *key, int size)
{
	unsigned int hash_value = 0;
	size_t i = 0;

	while (hash_value < UINT_MAX && i < strlen(key))
	{
		hash_value = hash_value << 8;
		hash_value += key[i];
		i++;
	}

	return (hash_value % size);
}
