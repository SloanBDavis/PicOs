#ifndef MUTEX_H
#define MUTEX_H

#include <stdint.h>
#include <stdbool.h>
#include "task.h"

typedef struct {
    volatile bool   locked;
    tcb_t          *owner;
    tcb_t          *wait_queue;
} mutex_t;

void mutex_init(mutex_t *mtx);
void mutex_lock(mutex_t *mtx);
void mutex_unlock(mutex_t *mtx);

#endif
