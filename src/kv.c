#include <stdio.h>
#include <stdlib.h>
#include "kv.h"

kv_t* kv_init(size_t capacity) {
    // Allocating memory
    kv_t *kv_ptr = malloc(sizeof(kv_t));
    kv_entry_t * entries = malloc(capacity * sizeof(kv_entry_t));

    // Handling errors in memory allocation
    if (kv_ptr == NULL) {
        printf("Failed to create a new kv_t\n");
        return NULL;
    }

    if (entries == NULL) {
        printf("Failed to create a new int array of size %d\n", capacity);
        return NULL;
    }

    // Saving table attributes
    kv_ptr->capacity = capacity;
    kv_ptr->count = 0;
    kv_ptr->entries = entries;

    return kv_ptr;
}

void kv_free(kv_t* table) {
    free(table->entries);
    free(table);
}
