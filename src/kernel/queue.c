#include <stddef.h>
#include <string.h>
#include "queue.h"

void queue_init(queue_t *q, uint8_t *buffer, uint32_t msg_size, uint32_t capacity) {
    q->buffer          = buffer;
    q->msg_size        = msg_size;
    q->capacity        = capacity;
    q->count           = 0;
    q->head            = 0;
    q->tail            = 0;
    q->send_wait_queue = NULL;
    q->recv_wait_queue = NULL;
}

bool queue_send(queue_t *q, const void *msg) {
    return false;
}

bool queue_receive(queue_t *q, void *msg) {
    return false;
}

bool queue_send_from_isr(queue_t *q, const void *msg) {
    return false;
}
