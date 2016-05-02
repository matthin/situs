#include "situs/array.h"
#include "situs/linked_list.h"
#include "situs/stack.h"
#include <stdio.h>

int main() {
  STArray array = {
    .element_size = 5
  };
  st_array_new(&array);
  st_array_push(&array, "test");
  printf("%s\n", st_array_get(&array, 0));

  STLinkedList linked_list;
  st_linked_list_new(&linked_list);
  st_linked_list_push(&linked_list, "linked list test1");
  st_linked_list_push(&linked_list, "linked list test2");
  printf("%s\n", st_linked_list_get(&linked_list, 1));
  st_linked_list_free(&linked_list);

  STStack stack;
  st_stack_push(&stack, "stack test1");
  st_stack_push(&stack, "stack test2");
  printf("%s\n", st_stack_pop(&stack));
  st_stack_free(&stack);

  return 0;
}
