#pragma once

#include <sys/types.h>

typedef struct STArray {
  void **elements;
  const size_t element_size;
  size_t length;
  size_t reserved_length;
} STArray;

void st_array_new(STArray *array);
void st_array_free(STArray *array);

void st_array_push(STArray *array, void *element);
void *st_array_get(const STArray *array, size_t index);
void st_array_remove(STArray *array, size_t index);

void st_array_resize(STArray *array);
