#ifndef _MAIN_H_
#define _MAIN_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* macros  */
#define SIZE 1000

/* structures */
typedef struct Entry {
	char *key;
	int value;
	struct Entry *next;
} Entry;

typedef struct HashTable {
	Entry **table;
	int size;
} HashTable;

/* prototypes */
unsigned int hash(const char *key, int size);
void insert(HashTable *hashtable, const char *key, int value);
void insert_open_addressing(HashTable *hashtable, const char *key, int value);
void printHashTable(HashTable *hashtable);


#endif /* _MAIN_H_ */
