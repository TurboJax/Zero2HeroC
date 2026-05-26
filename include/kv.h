#ifndef KV_PROJ
#define KV_PROJ

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *key;
    char *value;
} kv_entry_t;

typedef struct {
    size_t capacity;
    size_t count;
    kv_entry_t *entries;
} kv_t;

/**
 * Creates a new key-value store of the specified size.
 *
 * @param capacity The size of the table to create.
 * @return The new kv_t struct.
 */
kv_t* kv_init(size_t capacity);

/**
 * Frees the memory for a table.
 *
 * @param table The kv_t struct to free memory of.
 */
void kv_free(kv_t* table);
#endif
