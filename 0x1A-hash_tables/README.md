Hash tables are a data structure that allows for efficient data retrieval and storage by using a hash function to map keys to indices in an array. In C, hash tables are typically implemented using arrays and linked lists or other collision resolution techniques.

Here's a basic example of a hash table implementation in C using separate chaining for collision resolution:

c
Copy code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// Structure for a key-value pair
struct KeyValue {
    char* key;
    int value;
    struct KeyValue* next; // For handling collisions
};

// Hash table structure
struct HashTable {
    struct KeyValue* table[TABLE_SIZE];
};

// Hash function to map keys to indices
int hashFunction(const char* key) {
    int hash = 0;
    for (int i = 0; key[i] != '\0'; ++i) {
        hash += key[i];
    }
    return hash % TABLE_SIZE;
}

// Function to create a new key-value pair
struct KeyValue* createPair(const char* key, int value) {
    struct KeyValue* newPair = (struct KeyValue*)malloc(sizeof(struct KeyValue));
    newPair->key = strdup(key);
    newPair->value = value;
    newPair->next = NULL;
    return newPair;
}

// Function to insert a key-value pair into the hash table
void insert(struct HashTable* ht, const char* key, int value) {
    int index = hashFunction(key);

    // Check if the key already exists at this index
    struct KeyValue* current = ht->table[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            // Key already exists, update the value
            current->value = value;
            return;
        }
        current = current->next;
    }

    // Key doesn't exist, insert a new pair at the beginning of the linked list
    struct KeyValue* newPair = createPair(key, value);
    newPair->next = ht->table[index];
    ht->table[index] = newPair;
}

// Function to retrieve the value associated with a key
int get(struct HashTable* ht, const char* key) {
    int index = hashFunction(key);

    // Traverse the linked list at the specified index
    struct KeyValue* current = ht->table[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            // Key found, return the associated value
            return current->value;
        }
        current = current->next;
    }

    // Key not found
    return -1;
}

int main() {
    // Create a hash table
    struct HashTable myHashTable;

    // Insert some key-value pairs
    insert(&myHashTable, "apple", 5);
    insert(&myHashTable, "banana", 10);
    insert(&myHashTable, "orange", 7);

    // Retrieve values using keys
    printf("Value for 'apple': %d\n", get(&myHashTable, "apple"));
    printf("Value for 'banana': %d\n", get(&myHashTable, "banana"));
    printf("Value for 'orange': %d\n", get(&myHashTable, "orange"));
    printf("Value for 'grape': %d\n", get(&myHashTable, "grape"));

    return 0;
}
