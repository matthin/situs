#include "situs/array.h"
#include <stdlib.h>

void st_array_new(STArray *array) {
  st_array_resize(array);
}

void st_array_free(STArray *array) {
  for (int i = 0; i < array->length; ++i) {
    free(array->elements[i]);
  }
  free(array->elements);
}

void st_array_push(STArray *array, void *element) {
  if (array->length == array->reserved_length) {
    st_array_resize(array);
  }

  array->elements[array->length++] = element;
}

void *st_array_get(const STArray *array, const size_t index) {
  return array->elements[index];
}

void st_array_remove(STArray *array, size_t index) {
  while (index < array->length) {
    array->elements[index] = array->elements[++index];
  }
  array->length--;

  if (array->reserved_length > (array->length + 50) * 3) {
    st_array_resize(array);
  }
}

void st_array_resize(STArray *array) {
  array->reserved_length = (array->length + 50) * 1.5;
  array->elements = realloc(array->elements,
                            array->reserved_length * array->element_size);
}
