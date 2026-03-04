#include <stddef.h>
#include "mutex.h"

void mutex_init(mutex_t *mtx) {
    mtx->locked     = false;
    mtx->owner      = NULL;
    mtx->wait_queue = NULL;
}

void mutex_lock(mutex_t *mtx) {
}

void mutex_unlock(mutex_t *mtx) {
}
