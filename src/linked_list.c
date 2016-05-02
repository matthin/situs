#include "situs/linked_list.h"
#include <stdlib.h>

void st_linked_list_new(STLinkedList *linked_list) {
  linked_list->root = malloc(sizeof(STLinkedListNode));
}

void st_linked_list_free(STLinkedList *linked_list) {
  STLinkedListNode *current = linked_list->root;
  STLinkedListNode *next;

  while (current != NULL) {
    next = current->next;
    free(next);
    current = next;
  }
}

void st_linked_list_push(STLinkedList *linked_list, void *element) {
  STLinkedListNode *last = linked_list->root;
  while (last->next != NULL) {
    last = last->next;
  }

  last->next = malloc(sizeof(STLinkedListNode));
  last->next->data = element;
}

void *st_linked_list_get(STLinkedList *linked_list, size_t index) {
  STLinkedListNode *node = linked_list->root->next;

  while (index-- > 0) {
    if (node->next == NULL) {
      return NULL;
    }
    node = node->next;
  }

  return node->data;
}
