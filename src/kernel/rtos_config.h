#ifndef RTOS_CONFIG_H
#define RTOS_CONFIG_H

#include <stddef.h>

#define MAX_TASKS           8
#define MAX_PRIORITIES      4
#define TICK_RATE_HZ        1000
#define DEFAULT_STACK_SIZE  1024
#define IDLE_STACK_SIZE     256
#define TIME_SLICE_TICKS    10
#define STACK_CANARY        0xDEADBEEFU
#define MAX_SEMAPHORES      8
#define MAX_MUTEXES         4
#define MAX_QUEUES          4
#define DEFAULT_QUEUE_DEPTH 16
#define DEFAULT_MSG_SIZE    16

#endif
