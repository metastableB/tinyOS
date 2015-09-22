#include "comparators.h"
/*
 * Comparator object for priority scheduler. The aux is not implemented.
 */
bool
priority_scheduler_comp(const struct list_elem *a, const struct list_elem *b, void* aux)
{
	int * temp = (int*) aux;
	struct thread* A = list_entry (a, struct thread, elem);
    struct thread* B = list_entry (b, struct thread, elem);
    return (A->priority < B->priority);
}

/*
 * Comparator to sort sleeping_list according to sleep till times.
 * The thread with earliest sleep till time should be towards the 
 * beginning.
 */
bool
list_less_sleeping (const struct list_elem *a, const struct list_elem *b,
                             void *aux)
{
	struct thread* A = list_entry(a, struct thread, sleep_elem);
	struct thread* B = list_entry(b, struct thread, sleep_elem);
	return (A->sleep_till < B->sleep_till);
}