#include "main.h"

/**
*
*
*/
int main(void)
{
	HashTable *hashtable;
	int i = 0;

	hashtable = (HashTable *) malloc(sizeof(HashTable));
	hashtable->table = (Entry **) malloc(sizeof(Entry *) * SIZE);

	for (i = 0; i < SIZE; i++)
		hashtable->table[i] = NULL;

	hashtable->size = SIZE;

	insert(hashtable, "Carlos", 10);
	insert(hashtable, "Mafe", 8);
	insert(hashtable, "Jesus", 20);

	printHashTable(hashtable);

	return (0);
}
