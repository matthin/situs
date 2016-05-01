#pragma once

typedef struct STNode {
  void *data;
  struct STNode *next;
} STNode;

typedef struct STStack {
  STNode *top;
} STStack;

void st_stack_free(STStack *stack);

void st_stack_push(STStack *stack, void *element);
void *st_stack_pop(STStack *stack);
