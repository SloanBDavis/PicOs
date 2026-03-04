#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "task.h"

void   scheduler_init(void);
void   scheduler_add_task(tcb_t *tcb);
void   scheduler_remove_task(tcb_t *tcb);
tcb_t *scheduler_pick_next(void);
void   scheduler_request_switch(void);

#endif
