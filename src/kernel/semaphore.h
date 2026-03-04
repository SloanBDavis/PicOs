#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include <stdint.h>
#include "task.h"

typedef struct {
    volatile uint32_t  count;
    uint32_t           max_count;
    tcb_t             *wait_queue;
} semaphore_t;

void sem_init(semaphore_t *sem, uint32_t init_count, uint32_t max_count);
void sem_wait(semaphore_t *sem);
void sem_signal(semaphore_t *sem);
void sem_signal_from_isr(semaphore_t *sem);

#endif
