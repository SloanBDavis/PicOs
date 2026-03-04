#include <stddef.h>
#include "semaphore.h"

void sem_init(semaphore_t *sem, uint32_t init_count, uint32_t max_count) {
    sem->count      = init_count;
    sem->max_count  = max_count;
    sem->wait_queue = NULL;
}

void sem_wait(semaphore_t *sem) {
}

void sem_signal(semaphore_t *sem) {
}

void sem_signal_from_isr(semaphore_t *sem) {
}
