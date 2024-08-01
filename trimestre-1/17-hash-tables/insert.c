#include "main.h"

void insert(HashTable *hashtable, const char *key, int value)
{
	unsigned int index = hash(key, hashtable->size);

	Entry *entry = (Entry *) malloc(sizeof(Entry));
	entry->key = strdup(key);
	entry->value = value;
	entry->next = hashtable->table[index];
	hashtable->table[index] = entry;
}
