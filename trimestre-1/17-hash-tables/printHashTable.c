#include "main.h"

void printHashTable(HashTable *hashtable)
{
	int i = 0;
	Entry *current;

	while (i < hashtable->size)
	{
		current = hashtable->table[i];
		if (current != NULL)
		{
			printf("table in index %d ", i);
			while (current != NULL)
			{
				printf("key: %s value: %d -> ", current->key, current->value);
				current = current->next;
			}
			printf("NULL\n");
		}
		i++;
	}
}
