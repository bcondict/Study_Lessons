# Hash Tables

## Concept to cover

- Definition and Purpose
  - What are hash tables?
  - Common use cases for hash tables
- Hash Functions
  - Characteristics of a good hash function
  - Examples of simple hash functions
- Collision Resolution
  - Separate chaining
  - Open addressing (linear probing, quadratic probing, double hashing)
- Operations
  - Insertion
  - Deletion
  - Search
- Applications
  - Real-world examples of hash tables

## Origin and Story

The concept of hash tables originated in the mid-20th century as a way to provide fast data retrieval.

One of the first implementations was developed by Hans Peter Luhn at IBM in the 1950s. The Idea was to create a data structure that could provide efficient access and modification operations compared to other data structures like arrays and liked list.

Over time, has tables have evolved to become a fundamental data structure in computed science, used in various applications such as databases, compiles, and network processing.

## What is it and how to use it

### What is it

Hash table is a data structure that stores key-value pairs. It uses a hash function to compute an index (hash code) from the key, where the value is stored in an array. This allows for efficient data retrieval operations such as searching, inserting, and deleting elements.

### How to use it

1. Define the data structure:

- Hash Table Entry: A structure to represents a key-value pair.
  ```c
  typedef struct Entry {
    char *key;
    int value;
    struct Entry *next; /* for handling collisions with chaining */
  } Entry;
  ```
- Hash table: A structure to store an array of entries.
  ```c
  #define SIZE 1000
  typedef struct HashTable {
    Entry **table;
    int size; /* size of buckets */
  } HashTable;
  ```

2. Hash function:

- A hash functions maps a key to an index in the hash table.

  ```c
  unsigned int has(const char *key, int size)
  {
    usigned long int hash_value = 0;
    int i = 0;

    while (hash_value < ULONG_MAX && i < strlen(key))
    {
      hash_value = hash_value << 8;
      hash_value += key[i];
      i++;
    }
  }

  return (hash_value % size);
  ```

3. Collision resolution:

- Separate chaining:

  Handle collisions by storing multiple entries in the same bucket. Each bucket in the hash table points to a linked list of entries that hash to the same index.

  ```c
  void insert(HashTable *hashtable, const char *key, int value)
  {
    unsigned int index = hash(key, hashtable->size);
    Entry *entry = (Entry *)malloc(sizeof(Entry));
    entry->key = strdup(key);
    entry->value = value;
    entry->next = hashtable->table[index];
    hashtable->table[index] = entry;
  }
  ```

- Open addressing:

  If a collision occurs, the algorithm probes for the next available slot in the hash table. This can be done using different techniques such as linear probing, quadratic probing, or double hashing.

  ```c
  void insert_open_addressing(HastTable *hashtable, const char *key, int value)
  {
    unsigned int index = hash(key, hashtable->size);
    Entry *entry;

    while (hashtable->table[index] != NULL && strcmp(hashtable->table[index]->key, key) != 0)
    {
      index = (index + 1) % hashtable->size; /* linear probing */
    }

    if (hashtable->table[index] != NULL)
    {
      free(hashtable->table[index]->key);
      free(hashtable->table[index]);
    }

    entry = (Entry *)malloc(sizeof(Entry));
    hashtable->table[index] = entry;
    hashtable->table[index]->key = strdup(key);
    hashtable->table[index]->value = value;
    hashtable->table[index]->next = null;
  }
  ```

4. Operations:

- Search Operation:
  Find the value associated with a given key.

  ```c
  int search(HashTable *hashtable, const char *key)
  {
    unsigned int index = hash(key, hashtable->size);
    Entry *entry = hashtable->table[index];

    while (entry != NULL && strcmp(entry->key, key) != 0)
    {
        entry = entry->next;
    }

    if (entry != NULL) {
      return entry->value;
    }

    return -1;  /* Key not found */
  }
  ```

- Delete Operation:
  Remove a key-value pair from the hash table.

  ```c
  void delete(HashTable *hashtable, const char *key)
  {
    unsigned int index = hash(key, hashtable->size);
    Entry *entry = hashtable->table[index];
    Entry *prev = NULL;

    while (entry != NULL && strcmp(entry->key, key) != 0)
    {
      prev = entry;
      entry = entry->next;
    }

    if (entry == NULL)
    {
      return;  /* Key not found */
    }

    if (prev == NULL)
      hashtable->table[index] = entry->next;
    if (prev != NULL)
        prev->next = entry->next;

    free(entry->key);
    free(entry);
  }
  ```
