#include "task.h"
#include "scheduler.h"

static tcb_t    tcb_pool[MAX_TASKS];
static uint32_t task_stacks[MAX_TASKS][DEFAULT_STACK_SIZE / sizeof(uint32_t)];
static uint8_t  next_task_id = 0;

tcb_t *current_task = NULL;

int task_create(task_func_t func, void *params, uint8_t priority, uint32_t stack_size) {
    return -1;
}

void task_yield(void) {
}

void task_delay(uint32_t ticks) {
}

void task_suspend(uint8_t task_id) {
}

void task_resume(uint8_t task_id) {
}
