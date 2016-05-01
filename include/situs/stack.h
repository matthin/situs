#pragma once

/**
 * Used to store an element in a stack.
 */
typedef struct STNode {
  void *data;
  struct STNode *next;
} STNode;

/**
 * Standard stack which accesses data using the last in, first out method.
 */
typedef struct STStack {
  STNode *top;
} STStack;

/**
 * Cleanups a stack's members. Doesn't free the stack itself.
 */
void st_stack_free(STStack *stack);

/**
 * Adds a single element onto a stack.
 */
void st_stack_push(STStack *stack, void *element);

/**
 * Removes and returns a single element from a stack.
 */
void *st_stack_pop(STStack *stack);
