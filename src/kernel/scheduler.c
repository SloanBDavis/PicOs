#include "scheduler.h"
#include "rtos_config.h"

static tcb_t *ready_queue[MAX_PRIORITIES];

void scheduler_init(void) {
}

void scheduler_add_task(tcb_t *tcb) {
}

void scheduler_remove_task(tcb_t *tcb) {
}

tcb_t *scheduler_pick_next(void) {
    return NULL;
}

void scheduler_request_switch(void) {
}
