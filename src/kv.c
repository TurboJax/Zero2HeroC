#include <stdio.h>
#include <stdlib.h>
#include "kv.h"

kv_t* kv_init(size_t capacity) {
    // Allocating memory for the table
    kv_t *kv_ptr = malloc(sizeof(kv_t));
    if (kv_ptr == NULL) {
        printf("Failed to allocate memory for the table\n");
        return NULL;
    }

    // Allocating memory for the entries
    kv_entry_t * entries = calloc(capacity, sizeof(kv_entry_t));
    if (entries == NULL) {
        free(kv_ptr);
        printf("Failed to allocate memory for the entries\n");
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
