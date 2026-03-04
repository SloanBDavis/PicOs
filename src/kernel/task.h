#ifndef TASK_H
#define TASK_H

#include <stdint.h>
#include <stdbool.h>
#include "rtos_config.h"

typedef enum {
    TASK_READY,
    TASK_RUNNING,
    TASK_BLOCKED,
    TASK_SUSPENDED
} task_state_t;

typedef struct tcb {
    uint32_t    *stack_ptr;
    uint32_t    *stack_base;
    uint32_t     stack_size;
    uint8_t      task_id;
    uint8_t      priority;
    uint8_t      base_priority;
    task_state_t state;
    uint32_t     wake_tick;
    struct tcb  *next;
} tcb_t;

typedef void (*task_func_t)(void *params);

int  task_create(task_func_t func, void *params, uint8_t priority, uint32_t stack_size);
void task_yield(void);
void task_delay(uint32_t ticks);
void task_suspend(uint8_t task_id);
void task_resume(uint8_t task_id);

#endif
