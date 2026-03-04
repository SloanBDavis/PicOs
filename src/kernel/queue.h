#ifndef QUEUE_H
#define QUEUE_H

#include <stdint.h>
#include <stdbool.h>
#include "task.h"
#include "rtos_config.h"

typedef struct {
    uint8_t   *buffer;
    uint32_t   msg_size;
    uint32_t   capacity;
    volatile uint32_t count;
    uint32_t   head;
    uint32_t   tail;
    tcb_t     *send_wait_queue;
    tcb_t     *recv_wait_queue;
} queue_t;

void queue_init(queue_t *q, uint8_t *buffer, uint32_t msg_size, uint32_t capacity);
bool queue_send(queue_t *q, const void *msg);
bool queue_receive(queue_t *q, void *msg);
bool queue_send_from_isr(queue_t *q, const void *msg);

#endif
