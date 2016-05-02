#pragma once

#include <sys/types.h>

/**
 * Used to store an element in the linked list.
 */
typedef struct STLinkedListNode {
  void *data;
  struct STLinkedListNode *next;
} STLinkedListNode;

/**
 * Standard singly linked list.
 */
typedef struct STLinkedList {
  STLinkedListNode *root;
} STLinkedList;

/**
 * Initializes a new linked list.
 */
void st_linked_list_new(STLinkedList *linked_list);

/**
 * Cleanups a linked list's members. Doesn't free the the linked list itself.
 */
void st_linked_list_free(STLinkedList *linked_list);

/**
 * Adds a single element onto the end of the linked list.
 */
void st_linked_list_push(STLinkedList *linked_list, void *element);

/**
 * Retrieves a single element by index.
 */
void *st_linked_list_get(STLinkedList *linked_list, size_t index);
