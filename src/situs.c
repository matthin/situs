#include "situs/array.h"
#include "situs/stack.h"
#include <stdio.h>

int main() {
  STArray array = {
    .element_size = 5
  };
  st_array_new(&array);
  st_array_push(&array, "test");
  printf("%s\n", st_array_get(&array, 0));

  STStack stack;
  st_stack_push(&stack, "stack test1");
  st_stack_push(&stack, "stack test2");
  printf("%s\n", st_stack_pop(&stack));

  return 0;
}
