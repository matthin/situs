#include "situs/array.h"
#include <stdio.h>

int main() {
  STArray array = {
    .element_size = 5
  };
  st_array_new(&array);

  st_array_push(&array, "test");
  printf("%s\n", st_array_get(&array, 0));

  return 0;
}
