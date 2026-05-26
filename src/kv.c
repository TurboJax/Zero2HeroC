#include <stdio.h>
#include <stdlib.h>
#include "kv.h"

kv_t* kv_init(size_t capacity) {
    // Allocating memory
    kv_t *kv_ptr = malloc(sizeof(kv_t));
    int count = malloc(sizeof(int) * capacity);

    // Handling errors in memory allocation
    if (kv_ptr == NULL) {
        printf("Failed to create a new kv_t\n");
        return NULL;
    }

    if (count == NULL) {
        printf("Failed to create a new int array of size %d\n", capacity);
        return NULL;
    }

    // Saving struct attributes
    kv_ptr->capacity = capacity;
    kv_ptr->count = count;

    return kv_ptr;
}

void kv_free(kv_t* table) {
    // TODO: implement
}
