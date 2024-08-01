#include "main.h"
#include <string.h>

void insert_open_addressing(HashTable *hashtable, const char *key, int value)
{
	unsigned int index = hash(key, hashtable->size);

	while (hashtable->table[index] != NULL && strcmp(hashtable->table[index]->key, key) != 0)
	{
		index = (index + 1) % hashtable->size; /* linear probing */
	}

	if (hashtable->table[index] != NULL)
	{
		free(hashtable->table[index]->key);
		free(hashtable->table[index]);
	}

	hashtable->table[index] = (Entry *) malloc(sizeof(Entry));
	hashtable->table[index]->key = strdup(key);
	hashtable->table[index]->value = value;
	hashtable->table[index]->next = NULL;
}
