
#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include <stddef.h>
#include "system.h"

struct linked_list {
    struct linked_list *next;
    void *data;
};

typedef struct linked_list linked_list_t;

void linked_list_init(linked_list_t **list);
kairos_err_t linked_list_is_empty(linked_list_t **list);
kairos_err_t linked_list_append(linked_list_t **list, void *data);
kairos_err_t linked_list_insert(linked_list_t **list, void *data);
kairos_err_t linked_list_pop(linked_list_t **list);
kairos_err_t linked_list_remove(linked_list_t **list);
#endif /* __LL_H */
