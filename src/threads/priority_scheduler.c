#include "priority_scheduler.h"
/*
 * Comparator object for priority scheduler. The aux is not implemented.
 */
bool priority_scheduler_comp(const struct list_elem *a, const struct list_elem *b, void* aux){
	int * temp = (int*) aux;
	struct thread* A = list_entry (a, struct thread, elem);
    struct thread* B = list_entry (b, struct thread, elem);
    return (A->priority < B->priority);
}