//
// Created by Joshua Ahn on 9/29/17.
//

#ifndef DATASTRUCTURE_IN_C_LINKED_LIST_H
#define DATASTRUCTURE_IN_C_LINKED_LIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct _ListElement {
    void* data;
    struct _ListElement* next;
} ListElement;

typedef struct _List {
    ListElement* head;
    ListElement* tail;
    int size;

    void (*destroy)(void* data);
    void (*print)(void* data);
} List;

bool list_init(List* list, void (*destroy)(void* data), void (*print)(void* data));
bool list_destroy(List* list);
bool list_insert_after(List* list, ListElement* element, void* data);
bool list_remove(List* list, ListElement* element, void* data);
bool list_lookup(List* list, ListElement* element, void* data);
inline int list_size(List* list) {return list->size;}
void list_print(List* list);

#endif //DATASTRUCTURE_IN_C_LINKED_LIST_H
