#include "thread.h"

/* Auxiliary comparator for priority scheduler */

bool
priority_scheduler_comp(const struct list_elem *a, const struct list_elem* b, void* aux);