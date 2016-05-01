#pragma once

#include <sys/types.h>

/**
 * Dynamic array, which grows and shrinks at runtime. Shouldn't contain
 * pointers to read-only memory, such as string literals.
 */
typedef struct STArray {
  void **elements;
  const size_t element_size;
  size_t length;
  size_t reserved_length;
} STArray;

/**
 * Initializes an array's members.
 */
void st_array_new(STArray *array);

/**
 * Cleanups an array's members. Doesn't free the array itself.
 */
void st_array_free(STArray *array);

/**
 * Adds a single element to the end of an array.
 */
void st_array_push(STArray *array, void *element);

/**
 * Retrieves a single element from an array.
 */
void *st_array_get(const STArray *array, size_t index);

/**
 * Removes a single element from an array.
 */
void st_array_remove(STArray *array, size_t index);

/**
 * Resizes an array's reserved length, which is the space allocated for each
 * element.
 */
void st_array_resize(STArray *array);
