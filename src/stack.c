#include "situs/stack.h"
#include <stdlib.h>

void st_stack_free(STStack *stack) {
  while (st_stack_pop(stack) != NULL);
}

void st_stack_push(STStack *stack, void *element) {
  STNode *node = malloc(sizeof(STNode));
  node->data = element;
  node->next = stack->top;
  stack->top = node;
}

void *st_stack_pop(STStack *stack) {
  if (stack->top == NULL) {
    return NULL;
  }

  void *temp = stack->top->data;
  free(stack->top);
  stack->top = stack->top->next;
  return temp;
}
