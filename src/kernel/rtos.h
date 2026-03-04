#ifndef RTOS_H
#define RTOS_H

#include "rtos_config.h"
#include "task.h"
#include "scheduler.h"
#include "tick.h"
#include "semaphore.h"
#include "mutex.h"
#include "queue.h"

void rtos_init(void);
void rtos_start(void);

#endif
