//
// Created by Joshua Ahn on 9/29/17.
//

#include <stdlib.h>
#include "linked_list.h"

bool list_init(List* list, void (*destroy)(void* data), void (*print)(void* data)) {
    return true;
}

bool list_destroy(List* list) {
    return true;
}

bool list_insert_after(List* list, ListElement* element, void* data) {
    return true;
}

bool list_remove(List* list, ListElement* element, void* data) {
    return true;
}

bool list_lookup(List* list, ListElement* element, void* data) {
    return true;
}

void list_print(List* list) {
    return;
}
